//
//  Address.hpp
//
//  Created by Andrew Nomura on 4/30/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//

#pragma


struct Address : public Word
{
    Address():Address(0, 0, 0, 0){}
    Address(Word address, Word displacement, Word frame, Word page)
    : address_(address), displacement_(displacement), frame_(frame), page_(page){}
    
    friend std::istream& operator>>(std::istream& is, Word& w){
        return is >> w.address_ >> w.displacement_ >> w.frame_ >> w.page_;
    }
    
    Word address_;
    Word displacement_; //offset
    Word frame_;
    Word page_;
};
