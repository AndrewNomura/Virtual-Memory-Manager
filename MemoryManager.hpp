//
//  MemoryManager.hpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//
#include <vector>
using namespace std;

class MemoryManager{
public:
    int page;
    void makeValid(int table[256][2], int page);
    void makeVector();
    void page_in(); //select frame number; FCFS
    
    vector<int> frameVector;
};

void MemoryManager::makeVector(){            //vector of empty frames
    for (int i = 0; i < 256; i++){
        frameVector.push_back(0);
    }
}

void MemoryManager::makeValid(int table[256][2], int page){
    
    //frame finder
    table[page][1] = 1;

    for (int i = 0; i < 256; i++){
        if (frameVector[i] == 0){
            //RAM[frame #] = read(page)
        }
        else {
            cout << 1 << endl;
        }
    }
}

