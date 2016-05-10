//
//  Note.hpp
//  TreeCheck
//
//  Created by Ormir G. on 29/04/16.
//  Copyright © 2016 Ormir Gjurgjej, Nitika Kumar. All rights reserved.
//

#ifndef Note_hpp
#define Note_hpp

#include <stdio.h>

class Node {
private:
    int key;
    Node * left;
    Node * right;
    int bal;
public:
    Node(int);
    int getKey() const;
    void push(int);
    bool balance() const;
    ~Node();
};

#endif /* Note_hpp */
