//
//  tree.h
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-30.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#ifndef tree_hpp
#define tree_hpp
#endif /* tree_hpp */

#include <stdio.h>
#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Tree {
private:
    node* root;
    
public:
    Tree();
    node* get_root();
    node* add_node(int val);
    void print_pre_order(node *node);
    void print_in_order(node *node);
    void print_post_order(node *node);
};
