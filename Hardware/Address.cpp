//
//  Address.hpp
//
//  Created by Andrew Nomura on 4/30/19.
//  Copyright © 2019 Andrew Nomura. All rights reserved.
//
/*
#pragma
#include <sstream>
#include <fstream>
#include <string>


using namespace std;

struct node{
public:
    node():node(0, next_ = nullptr, prev_ = nullptr){}
    node(int logicalAddress, node* next, node* prev)
    :logicalAddress_(logicalAddress), next_(next), prev_(prev){}
    
    friend ostream& operator<<(ostream& os, const node& a){
        return os << a.logicalAddress_ << "\n";
    }
    
    friend istream& operator>>(istream& is, node& a){
        is >> a.logicalAddress_;
        a.next_ = a.prev_ = nullptr;
        return is;
    }
    //==========
    address():Word(){
        uint32_t():int();
        value_:uint32_t;
    };
    displacement():Word();
    frame():Word();
    page():Word();
 
    //==========
    
    int logicalAddress_;
    node* next_;
    node* prev_;
};

class linkedlist{
public:
    linkedlist():linkedlist(head_ = nullptr, tail_ = nullptr, 0){}
    linkedlist(node* head, node* tail, size_t size)
    :head_(head), tail_(tail), size_(size){}
    
    ~linkedlist(){ head_ = nullptr; tail_ = nullptr; size_ = 0; }
    
    bool empty() const { return size_ == 0; }
    bool size() const { return size_; }
    
    void append(const int &a){
        node *newNode = new node;   //create new node called newNode
        newNode->logicalAddress_ = a;     //set newNode data to the int
        if(empty()){                //if list is empty do the following
            head_ = tail_ = newNode;    //reset the head_ and tail_
        }
        else {                   //list is currently full
            node *p = tail_;        //set temporary node variable to the tail_
            newNode->prev_ = p;     //set pointers accordingly
            p->next_ = newNode;
            tail_ = newNode;        //set tail_ to newNode
        }
        ++size_;        //increase size of linkedlist
    }
    
    
    void readFile(){
        int contents;
        ifstream file;
        
        file.open("/Users/andrewnomura/Documents/CSUF/SPRING 2019/CPSC-351 Operating Systems/Final Programing Project/CPSC 351 Final Programming Project/CPSC 351 Final Programming Project/addresses.txt");
        
        if (!file.is_open()){
            cerr << "unable to open file...";
            exit(1);
        }
        
        while (file >> contents){
            append(contents);
        }
        
        file.close();
    }
    
    
    void output(){
        node *index = head_;
        while (index != NULL){
            cout << *index;
            index = index->next_;
            
            cout << page << "\t" << offset << "\n";
        }
    }
    
    
private:
    node* head_;
    node* tail_;
    size_t size_;
};

*/

