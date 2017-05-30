//
//  tree.cpp
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-30.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#include "tree.h"

Tree::Tree() {
    root = NULL;
}

node* Tree::get_root() {
    return root;
}

node* Tree::add_node(int val) {
    node* temp = get_root();
    if (!temp) {
        root = new node(val);
    }
    
    while (temp) {
        if (val < temp->data) {
            if (temp->left) {
                temp = temp->left;
            } else {
                temp->left = new node(val);
                temp = NULL;
            }
        }
        else if (val > temp->data) {
            if (temp->right) {
                temp = temp->right;
            } else {
                temp->right = new  node(val);
                temp = NULL;
            }
        }
        else {
            break;
        }
    }
    return temp;
}

void Tree::print_pre_order(node* node) {
    if (node == NULL)
        return;
    
    cout << node->data << " ";
    print_pre_order(node->left);
    print_pre_order(node->right);
}

void Tree::print_in_order(node* node) {
    if (node == NULL)
        return;
    
    print_in_order(node->left);
    cout << node->data << " ";
    print_in_order(node->right);
}

void Tree::print_post_order(node* node) {
    if (node == NULL)
        return;
    
    print_post_order(node->left);
    print_post_order(node->right);
    cout << node->data << " ";
}
