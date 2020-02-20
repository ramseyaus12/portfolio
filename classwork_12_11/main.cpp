//
//  main.cpp
//  classwork_12_11
//
//  Created by Austin Ramsey on 12/19/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>

using namespace std;

// Function Prototype
void reverser(char[], int, int);

// Main Function
int main() {
    char names[20];
    cout << "Enter string: ";
    cin >> names;
    int len = strlen(names);
    
    reverser(names, 0, len-1);
    
    
    return 0;
}

void reverser(char arr[], int pos, int size) {
    if (pos <= size) {
        cout << arr[size];
        reverser(arr, pos, size-1);
    }
    
}
