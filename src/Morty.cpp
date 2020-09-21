/*
 __  __            _
|  \/  | ___  _ __| |_ _   _        ___ _ __  _ __
| |\/| |/ _ \| '__| __| | | |      / __| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | (__| |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_)  \___| .__/| .__/
                       |___/           |_|   |_|
*/

// Include the Morty header file
#include "Morty.hpp"

// =========================================================================== // 
//          Define functions enclosed in Namespace C137 here 
// =========================================================================== // 
void C137::Morty(int start, int stop) {
    std::cout << "Morty C137 says:" << std::endl;
    for (int i = start; i <= stop; i++) {
        if ((i % 15) == 0) {
            std::cout << i << ": Aww Geez Man" << std::endl;
        } 
        else if ((i % 5) == 0) {
            std::cout << i << ": Geez" << std::endl;
        } 
        else if ((i % 3) == 0) {
            std::cout << i << ": Aww" << std::endl;
        } 
        else {
            std::cout << i << ": " << std::endl;
        }
    }
}
void C137::Morty(int start, int stop, int step) {
    std::cout << "Morty C137 says:" << std::endl;
    for (int i = start; i <= stop; i += step) {
        if ((i % 15) == 0) {
            std::cout << i << ": Aww Geez Man" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << i << ": Geez" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << i << ": Aww" << std::endl;
        }
        else {
            std::cout << i << ": " << std::endl;
        }
    }
}

// =========================================================================== // 
//          Define functions enclosed in Namespace Z286 here 
// =========================================================================== // 

void Z286::Morty(int start, int stop) {
    std::cout << "Morty Z286 says:" << std::endl;
    for (int i = start; i <= stop; i++) {
        if ((i % 15) == 0) {
            std::cout << i << ": naM zeeG wwA" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << i << ": zeeG" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << i << ": wwA" << std::endl;
        }
        else {
            std::cout << i << ": " << std::endl;
        }
    }
}
void Z286::Morty(int start, int stop, int step) {
    std::cout << "Morty Z286 says:" << std::endl;
    for (int i = start; i <= stop; i += step) {
        if ((i % 15) == 0) {
            std::cout << i << ": naM zeeG wwA" << std::endl;
        }
        else if ((i % 5) == 0) {
            std::cout << i << ": zeeG" << std::endl;
        }
        else if ((i % 3) == 0) {
            std::cout << i << ": wwA" << std::endl;
        }
        else {
            std::cout << i << ": " << std::endl;
        }
    }
}

//Extra credit

interdimensional::args interdimensional::parseArgs(int c, char** v) {
    args parsed;
    if (c == 4) {
        for (int i = 1; i < c; i++) { //index 1 starts with {start} argument not the executable. i is the index
            if (i == 1) {
                parsed.start = atoi(*(v + i));
            }
            else if (i == 2) {
                parsed.stop = atoi(*(v + i));
            }
            else {
                std::string temp = *(v + i);
                if (temp == "C137") {
                    parsed.dim = dimension::C137;
                } else if (temp == "Z286") {
                    parsed.dim = dimension::Z286;
                }
                else {
                    parsed.dim = dimension::UNKNOWN;
                }
                
            }
        }
    }
    else if (c == 5) {
        for (int i = 1; i < c; i++) { //index 1 starts with {start} argument not the executable. i is the index
            if (i == 1) {
                parsed.start = atoi(*(v + i));
            }
            else if (i == 2) {
                parsed.stop = atoi(*(v + i));
            }
            else if (i == 3) {
                parsed.step = atoi(*(v + i));
            }
            else {
                std::string temp = *(v + i);
                if (temp == "C137") {
                    parsed.dim = dimension::C137;
                }
                else if (temp == "Z286") {
                    parsed.dim = dimension::Z286;
                }
                else {
                    parsed.dim = dimension::UNKNOWN;
                }

            }
        }
    }
    return parsed;
}