//
//  definitions.cpp
//  Linked_Lists
//
//  Created by Austin Ramsey on 11/29/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "Header.h"

// Appending node to end of list
void List::appendNode(int value) {
    ListNode *newNode; // New Node
    ListNode *nodePtr; // To move through list
    
    newNode = new ListNode;
    newNode->data = value;
    newNode->next = nullptr;
    
    if (!head) {
        head = newNode;
    } else {
        nodePtr = head;
        while (nodePtr->next) {
            nodePtr = nodePtr->next;
            nodePtr->next = newNode;
        }
    }
}

// Inserting node into list
void List::insertNode(int value) {
    ListNode *newNode; // New Node
    ListNode *nodePtr; // To traverse list
    ListNode *previousNode = nullptr; // The previous node
    
    newNode = new ListNode;
    newNode->data = value;
    
    if (!head) {
        head = newNode;
        newNode->next = nullptr;
    } else {
        nodePtr = head;
        previousNode = nullptr;
        
        while (nodePtr != nullptr && nodePtr->data < value) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        
        if (previousNode == nullptr) {
            head = newNode;
            newNode->next = nodePtr;
        } else {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

// Deleting Specific Node
void List::deleteNode(int value) {
    ListNode *nodePtr; // To traverse the list
    ListNode *previousNode = nullptr; // to point to the previous node
    
    if (!head) {
        return;
    }
    
    if (head->data == value) {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    } else {
        nodePtr = head;
        
        while (nodePtr != nullptr && nodePtr->data != value) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        
        if (nodePtr) {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}

// Displaying List
void List::displayList() const {
    
    
}

// Deleting List
List::~List() {
    ListNode *nodePtr;
    ListNode *nextNode;
    
    nodePtr = head;
    
    while (nodePtr != nullptr) {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}
