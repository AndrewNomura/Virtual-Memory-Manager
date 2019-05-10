//
//  Ram.cpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//

#include <iostream>

class Ram{
public:
    Ram& instance();
    Ram& operator=(Ram& r){
        Ram ram;
        ram = this->ram + r.ram;
    }
    Ram()
    read(void);
status:array<Status, FRAM_SIZE>
private:
    Ram()
    struct Status{
    public:
    accessed:bool
    dirty:bool
    };
};


