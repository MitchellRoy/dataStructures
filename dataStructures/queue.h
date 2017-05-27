//
//  queue.h
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-26.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#ifndef queue_h
#define queue_h
#endif /* queue_h */

#include <stdio.h>
#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

class Queueobj {
    queue<int> num_queue;
    queue<string> string_queue;
    
public:
    void set_int_queue();
    void set_string_queue();
    void print_num_queue();
    void print_string_queue();
};
