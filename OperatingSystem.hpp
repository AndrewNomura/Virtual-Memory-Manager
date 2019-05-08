//
//  Page_Table.hpp
//  Page_Table
//
//  Created by Andrew Nomura on 5/7/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//
#pragma
typedef struct {
    int Valid;
    int Frame;
    int Dirty;
    int Requested;
} page_table_entry;

typedef page_table_entry* page_table_pointer;


class page_table{};

class PageTableEntry{};
