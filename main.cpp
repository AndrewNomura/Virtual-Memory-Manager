//
//  main.cpp
//  CPSC 351 Final Programming Project
//
//  Created by Dylan Connors, Bryan Lorentz, and Andrew Nomura on 4/27/19.
//  Copyright © 2019  Dylan Connors, Bryan Lorentz, Andrew Nomura. All rights reserved.
//

#include <iostream>
#include "read_file.hpp"

using namespace std;




int main(int argc, const char * argv[]) {
    //create a list of the addresses
    linkedlist l;
    l.readFile();
    l.output();
    
    return 0;
}

