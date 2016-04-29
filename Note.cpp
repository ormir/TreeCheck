//
//  Note.cpp
//  TreeCheck
//
//  Created by Ormir G. on 29/04/16.
//  Copyright © 2016 Ormir Gjurgjej, Nitika Kumar. All rights reserved.
//

#include <iostream>
#include "Note.hpp"

Node::Node(int k) :
key(k),
left(nullptr),
right(nullptr) {}

int Node::getKey() const { return key; }

void Node::push(int k) {
    if (key < k && right == nullptr) {
        right = new Node(k);
    } else if (key < k && right != nullptr) {
        right->push(k);
    } else if (key > k && left == nullptr) {
        left = new Node(k);
    } else if (key > k && left != nullptr) {
        left->push(k);
    } else {
        std::cout << "Duplicate key " << k << std::endl;
    }
}