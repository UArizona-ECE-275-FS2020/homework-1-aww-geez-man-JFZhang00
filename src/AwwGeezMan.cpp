/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.
One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.
*/

// Include the Morty header file
#include "Morty.hpp"


int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	//Extra credit parse command line arguments
	interdimensional::args parsedVal;
	parsedVal = interdimensional::parseArgs(ac, av);

	//// Parse the command line arguments
	//int start;
	//int stop;
	//int step = 1;
	//std::string dim;
	//
	////Sets the arguments into the variables listed above
	//if (ac == 4) {
	//	for (int i = 1; i < ac; i++) { //index 1 starts with {start} argument not the executable. i is the index
	//		if (i == 1) {
	//			start = atoi(*(av + i));
	//		} else if (i == 2) {
	//			stop = atoi(*(av + i));
	//		}
	//		else {
	//			dim = *(av + i);
	//		}
	//	}
	//} else if (ac == 5) {
	//	for (int i = 1; i < ac; i++) { //index 1 starts with {start} argument not the executable. i is the index
	//		if (i == 1) {
	//			start = atoi(*(av + i));
	//		}
	//		else if (i == 2) {
	//			stop = atoi(*(av + i));
	//		}
	//		else if (i == 3) {
	//			step = atoi(*(av + i));
	//		}
	//		else {
	//			dim = *(av + i);
	//		}
	//	}
	//}
	
	// Depending on the dimension of the arguments, call the appropriate Morty
	// function

	if (ac == 4) {
		if (parsedVal.dim == 0) {
			C137::Morty(parsedVal.start, parsedVal.stop);
		}
		else if (parsedVal.dim == 1) {
			Z286::Morty(parsedVal.start, parsedVal.stop);
		}
		else {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
		}
	}
	else if (ac == 5) {
		if (parsedVal.dim == 0) {
			C137::Morty(parsedVal.start, parsedVal.stop, parsedVal.step);
		}
		else if (parsedVal.dim == 1) {
			Z286::Morty(parsedVal.start, parsedVal.stop, parsedVal.step);
		}
		else {
			std::cout << "ERROR: Unknown dimension!!" << std::endl;
		}
	}

	return 0;
}