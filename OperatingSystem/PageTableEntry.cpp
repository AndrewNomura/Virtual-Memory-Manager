//
//  PageTableEntry.cpp
//
//  Created by Andrew Nomura on 5/9/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//


class PageTableEntry{};

typedef page_table_entry* page_table_pointer;


typedef struct {
    int Valid;
    int Frame;
    int Dirty;
    int Requested;
} page_table_entry;
