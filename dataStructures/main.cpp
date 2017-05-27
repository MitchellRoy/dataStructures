//
//  main.cpp
//  dataStructures
//
//  Created by Mitchell Roy on 2017-05-26.
//  Copyright © 2017 Mitchell Roy. All rights reserved.
//

#include "queue.h"

using namespace std;


int main() {
    
    cout << "hello world" << endl;
    
    Queueobj *q = new Queueobj();
    
    q->set_int_queue();
    q->print_num_queue();
    
    delete q;
    
    return 0;
}
