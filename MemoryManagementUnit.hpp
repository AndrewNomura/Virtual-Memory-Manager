//
//  MemoryManagementUnit.hpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//


class MemoryManagementUnit{
public:
    
    MemoryManagementUnit(){}
    void clearTLB();
    MemoryManagementUnit& instance();
   // MemoryManagementUnit& operator=(void);
    int pageAccesses();
    int pageFaults();
    //T read(void);
    void tlbAccesses();
    void tlbFaults();
    void read(Word& logicalAddress, PageTable& myPageTable, char data);
private:
    int page_access_count_;
    int page_in_faults_;
    //int tlb_:TLB;
    int tlb_access_count_;
    int tlb_faults_;
    
    friend Pagetable;
    //friend Address;
    //friend Word;
};

void MemoryManagementUnit::read(Word& logicalAddress, PageTable& myPageTable, char data){
    
}

