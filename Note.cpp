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
right(nullptr),
bal(0) {}

int Node::getKey() const { return key; }

void Node::push(int k) {
    if (key < k && right == nullptr) {
        right = new Node(k);
        bal++;
    } else if (key < k && right != nullptr) {
        right->push(k);
        bal++;
    } else if (key > k && left == nullptr) {
        left = new Node(k);
        bal--;
    } else if (key > k && left != nullptr) {
        left->push(k);
        bal--;
    } else {
        std::cout << "Duplicate key " << k << std::endl;
    }
}

void Node::balance() const {
//    const Node *n = this;
    if (left != nullptr) {
        left->balance();
    }
    
    if (right != nullptr) {
        right->balance();
    }
    
    std::cout << "bal(" << key << ") = " << bal;
    
    if (bal < 2 && bal > -2) {
        std::cout << std::endl;
    } else {
        std::cout << " (AVL Violation!)" << std::endl;
    }
}

Node::~Node() {
//    std::cout << "Deleting " << key << std::endl;
    
    if (left != nullptr) {
        delete left;
    }
    
    if (right != nullptr) {
        delete right;
    }
    
    
}