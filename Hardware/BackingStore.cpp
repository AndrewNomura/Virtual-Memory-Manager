//
//  BackingStore.cpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

class BackingStore{
public:
    ~BackingStore(){}
    BackingStore(){}
    BackingStore& instance();
    BackingStore& operator=();
    void read();
};

void BackingStore::read(int logicalAddress, PageTable myPageTable, int data){
    frame = PT(page).frame;
    RAM[frame][offset];
}
