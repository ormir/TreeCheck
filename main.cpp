//
//  main.cpp
//  TreeCheck
//
//  Created by Ormir G. on 29/04/16.
//  Copyright © 2016 Ormir Gjurgjej, Nitika Kumar. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Note.hpp"

int main(int argc, const char * argv[]) {
    if ( argc != 2 )
        std::cout << "usage: "<< argv[0] << " [filename]" << std::endl;
    else {
        // Read from given filename
        std::fstream file(argv[1]);
        if(file.is_open()){
            std::cout << "File '" << argv[1] << "' oppend." << std::endl;
            
            // Reach each line
            while (!file.eof()) {
                std::string line;
                std::getline(file, line);
                std::cout << "Nr. " << line << std::endl;
            }
            
        } else {
            std::cout << "File '" << argv[1] << "' cold not be oppend." << std::endl;
        }
        file.close();
    }
    return 0;
}
