//
//  MemoryManager.cpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//
#include <vector>
using namespace std;


class MemoryManager{
public:
    void makeValid();
    void makeVector();
    void page_in(); //select frame number; FCFS
    
    vector<int> frameVector;
};

void MemoryManager::makeVector(){            //vector of empty frames
    for (int i = 0; i < 256; i++){
        frameVector.push_back(0);
    }
}

void MemoryManager::makeValid(){
    //frame finder
    for (int i = 0; i < 256; i++){
        if (frameVector[i] == 0){
            //RAM[frame #] = read(page)
        }
        else {
            cout << 1 << endl;
        }
    }
}

