//
//  Header.h
//  Linked_Lists
//
//  Created by Austin Ramsey on 11/29/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef Header_h
#define Header_h

class List {
private:
    // Declaring structure for list
    struct ListNode {
        int data;
        ListNode *next;
    };
    ListNode *head, *tail;
public:
    // Constructor
    List() {
        head = nullptr;
        tail = nullptr;
    }
    // Destructor
    ~List();
    
    // Linked List Operations
    void appendNode(int);
    void insertNode(int);
    void deleteNode(int);
    void displayList() const;
};

#endif /* Header_h */
