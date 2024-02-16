//
//  main.cpp
//  Trees
//
//  Created by Rohan Soni on 16/2/2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Node{
public:
    int value;
    Node* left;
    Node* right;
    
    Node(int value){
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree{
public:
    Node* root;
    
    BinarySearchTree(){
        root = nullptr;
    }
};

