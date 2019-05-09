//
//  BackingStore.cpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//

#include <iostream>

class BackingStore{
public:
    ~BackingStore(){}
    BackingStore(){}
    BackingStore& instance();
    BackingStore& operator=();
    void read();
};
