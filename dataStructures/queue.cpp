//
//  queue.cpp
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-26.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#include "queue.h"

void Queueobj::set_int_queue() {
    int myint;
    cout << "Enter Integers into queue (enter 0 to end):\n";
    do {
        std::cin >> myint;
        num_queue.push(myint);
    } while (myint);
}

void Queueobj::print_num_queue() {
    cout << "Integer queue contains: ";
    while (!num_queue.empty())
    {
        cout << ' ' << num_queue.front();
        num_queue.pop();
    }
    cout << '\n';
}

void Queueobj::set_string_queue() {
    
}
