//
//  .hpp file
//  readFromFile
//
//  Created by Dylan Connors, Bryan Lorentz, and Andrew Nomura on 4/28/19.
//  Copyright © 2019 Dylan Connors, Bryan Lorentz, Andrew Nomura. All rights reserved.
//
#pragma

#include <fstream>

using namespace std;


struct node{
    node():node(0, next_ = nullptr, prev_ = nullptr){}
    node(int address, node* next, node* prev)
    :address_(address), next_(next), prev_(prev) {}
    
    friend ostream& operator<<(ostream& os, const node& n){
        return os << n.address_ << "\n";
    }
    friend istream& operator>>(istream& is, node& n){
        is >> n.address_;
        n.next_ = n.prev_ = nullptr;
        return is;
    }
    
    int address_;
    node* next_;
    node* prev_;
};


class linkedlist{
public:
    linkedlist():linkedlist(head_ = nullptr, tail_ = nullptr, 0){}
    linkedlist(node* head, node* tail, size_t size)
    :head_(head), tail_(tail), size_(size){}
    
    friend ostream& operator<<(ostream& os, const linkedlist& l){
        if (l.size_ == 0) { os << "list empty.\n"; }
        node *p = l.head_;
        while (p != nullptr){
            cout << *p << "\n";
            p = p->next_;
        }
        return os;
    }

    bool empty() const { return size_ == 0; }
    bool size() const { return size_; }
    
    void append(const int &a){
        node *newNode = new node;   //create new node called newNode
        newNode->address_ = a;      //set newNode data to the int
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
        
        /* use "addresses.txt" for Visual Studio*/
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
        }
    }

    
private:
    node* head_;
    node* tail_;
    size_t size_;
};
