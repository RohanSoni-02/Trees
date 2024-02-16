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
    
    bool insert(int value){
        Node* newNode = new Node(value);
        if(root == nullptr){
            root = newNode;
            return true;
        }
        Node* temp = root;
        while (true) {
            if (newNode->value == temp->value) {
                return false;
            }
            
            if (newNode->value < temp->value) {
                if (temp->left == nullptr) {
                    temp->left = newNode;
                    return true;
                }
                temp = temp->left;
            }
            else{
                if (temp->right == nullptr) {
                    temp->right = newNode;
                    return true;
                }
                temp = temp->right;
            }
        }
    }
    
    bool contains(int value){
        if (root == nullptr) {
            return false;
        }
        
        Node* temp = root;
        while (temp != nullptr) {
            if (value < temp->value) {
                temp = temp->left;
                if (temp->value == value) {
                    return true;
                }
                else{
                    return false;
                }
            }
            else if (value > temp->value) {
                temp = temp->right;
                if (temp->value == value) {
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                return true;
            }
        }
        return false;
    }
};

