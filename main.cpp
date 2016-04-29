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
            int min = 200000;
            int max = 0;
            int key = -1;
            
            // Create root node
            file >> key;
            Node * root = new Node(key);
            
            // Reach each line
            while (!file.eof()) {
                // insert new node
                file >> key;
                root->push(key);
                
                // Calculate statistic
                if (min > key) min = key;
                if (max < key) max = key;
            }
            
            // Show tree balance
            root->balance();
            delete root;
            
            // Show statistic
            std::cout << "min: " << min << ", max: " << max << ", avg: " << max/min << std::endl;
        } else {
            std::cout << "File '" << argv[1] << "' cold not be oppend." << std::endl;
        }
        file.close();
    }
    return 0;
}
