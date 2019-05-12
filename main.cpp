//
//  main.cpp
//  CPSC 351 Final Programming Project
//
//  Created by Andrew Nomura on 4/27/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <cstddef>
#include <string>
#include <vector>
#include <fstream>

//#include "Hardware/MemoryManagementUnit.hpp"
//#include "Hardware/Word.hpp"              //Address

#include "Hardware/MemoryManagementUnit.cpp"
//#include "Hardware/Word.cpp"                //Address
//#include "Hardware/Address.hpp"

//#include "OperatingSystem/MemoryManager.hpp"
#include "OperatingSystem/PageTable.cpp"
#include "Hardware/Word.cpp"

/*
namespace Hardware{
    struct ProcessControlBlock{
        PageTable myPageTable;
    };
    using PCB = ProcessControlBlock;
}
*/

/*
namespace {
    void runProcess()
    {
        auto & MMU = Hardware::MemoryManagementUnit::instance();
        OperatingSystem::ProcessControlBlock myPCB;
        
        MMU.clearTLB();
        // For each address (while not EOF):
        // 1)  Read the byte of data at that address; and
        // 2)  Display the address and data.
        Hardware::Address logicalAddress;
        while(std::cin >> logicalAddress;) // For each address (while not EOF)
        {
            while(true) try                  // A single instruction may generate many page faults
            {
                // 1) Read the byte of data at that address
                MMU.read( logicalAddress, myPCB.myPageTable, myData );         // May throw PageFault
                
                // 2) Display the address and data
                std::cout << myData;
                break;             // instruction completed successfully, okay to move to the next one
            }
            catch(const Hardware::MMU::PageFault & fault)         // Handle page faults, then restart instruction
            {
                // load the page, update tables, and restart the instruction
                memoryManager.pageIn( fault.pageNumber_, myPCB.myPageTable );
            }
        }  // while(...)
    }  // void runProcess()

}

*/
using namespace std;


int main(int argc, const char * argv[]) {
    int table[256][2];      //page table
    Word page;
    Word offset;
    //create all objects 
    PageTable myPageTable;
    MemoryManagementUnit MMU;
    MemoryManager mm;
    vector<int> v;
    char data;
    
    myPageTable.fillPT();
    
    mm.makeVector();
    
    
    
    Word logicalAddress;
    ifstream file;
    
    file.open("/Users/andrewnomura/Documents/CSUF/SPRING 2019/CPSC-351 Operating Systems/Final Programing Project/CPSC 351 Final Programming Project/CPSC 351 Final Programming Project/addresses.txt");
    
    if (!file.is_open()){
        cerr << "unable to open file...";
        exit(1);
    }
    
    
    while (file >> logicalAddress.uint32_t){
        //cout << logicalAddress << "\n";
        page.uint32_t = (logicalAddress.uint32_t & 0xFF00) >> 8;
        offset.uint32_t = (logicalAddress.uint32_t & 0xFF);
        
        //cout << page << "\t" << offset << "\n";
        //v.push_back(logicalAddress);
        mm.makeValid(table, page.uint32_t);
        MMU.read(logicalAddress, myPageTable, data);
    }
     
    
    file.close();
    //we now have a list of all addresses

    
    //myPageTable.outputPT();
    myPageTable.outputRAM();
    
    
 
    return 0;
}

