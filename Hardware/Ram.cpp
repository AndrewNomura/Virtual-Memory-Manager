//
//  Ram.cpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//

#include <iostream>
struct Status{
public:
    accessed:bool
    dirty:bool
};

class Ram{
public:
    Ram& instance();
    Ram& operator=(Ram& r){
        Ram ram;
        ram = this->ram + r.ram;
    }
    Ram()
    read(void);
status:array<Status, FRAME_SIZE>
private:
    RAM[256][256];  //RAM[frame #][offset]

};


