//
//  main.cpp
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-26.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#include "queue.h"
#include "tree.h"

using namespace std;


int main() {
    /*
    cout << "hello world" << endl;
    
    Queueobj *q = new Queueobj();
    
    q->set_int_queue();
    q->print_num_queue();
    
    delete q;
    */
    
    Tree *tree = new Tree();
    tree->add_node(5);
    tree->add_node(2);
    tree->add_node(8);
    tree->add_node(7);
    
    node* tmp = tree->get_root();
    tree->print_pre_order(tmp);
    cout << endl;
    tree->print_in_order(tmp);
    cout << endl;
    tree->print_post_order(tmp);
    cout << endl;
    
//        5
//    2       8
//           7
    
    return 0;
}
