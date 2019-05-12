//
//  PageTable.hpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//

//#include "OperatingSystem/PageTable.hpp"
//#include "Hardware/Address.hpp"
#include "MemoryManager.cpp"

using namespace std;

class PageTable
{
private:
    int table[256][2];
    int offset;
    bool validity;
public:
    void fillPT();
    void readPT(int logicalAddress, MemoryManager mmu);
    void outputPT();
    void setValidity();
};



void PageTable::fillPT(){
    int tt = 0;
    for (int i = 0; i < 256; i++){
        tt++;
        for(int j = 0; j < 2; j++){
            table[i][j] = tt;
            if (j == 1)
                table[i][j] = 0;
        }
    }
}

void PageTable::readPT(int logicalAddress, MemoryManager mm){
    unsigned int page = (logicalAddress & 0xFF00) >> 8;
    //unsigned int offset = (logicalAddress & 0xFF);
    
    
    
    //test if page number is valid
    if (table[page][1] == 0){   //0 means page number is invalid
        //throw page fault
        mm.makeValid(table, page);
    }
    else{                       //page number is valid
        table[page][1] = 1;     //make page number vaild
    }
     
}
 

void PageTable::outputPT(){
    for (int i = 0; i < 256; i++){
        for (int j = 0; j < 2; j++){
            cout << table[i][j];
            if (j == 1) cout << endl;
        }
    }
}


