//
//  hardware.hpp
//
//  Created by Andrew Nomura on 4/30/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//
#pragma

template<typename T>
class MemoryManagementUnit{
public:
    MemoryManagementUnit();
    void clearTLB();
    MemoryManagementUnit& instance();
    MemoryManagementUnit& operator=(void);
    int pageAccesses();
    int pageFaults();
    T read(void);
    void tlbAccesses();
    void tlbFaults();
private:
    int page_access_count_;
    int page_in_faults_;
    int tlb_:TLB;
    int tlb_access_count_;
    int tlb_faults_;
};

class BackingStore{
public:
    ~BackingStore(){}
    BackingStore(){}
    BackingStore& instance();
    BackingStore& operator=();
    void read();
};

template<typename T>
class Ram{
public:
    Ram& instance();
    Ram& operator=();
    Ram()
    T read(void);
status:array<Status, FRAM_SIZE>
private:
    Ram()
    struct Status{
    public:
        accessed:bool
        dirty:bool
    };
};

struct Address{
public:
    address():Word(){
        uint32_t():int();
        value_:uint32_t;
    };
    displacement():Word();
    frame():Word();
    page():Word();
};



