//
//  main.cpp
//  Pointers
//
//  Created by Austin Ramsey on 4/23/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
using namespace std;

int num;
int *ptr = nullptr;

int main() {
    cout << "Enter a number" << endl;
    cin >> num;
    ptr = &num;
    cout << "The number you entered was "<< *ptr << endl;
    cout << "The address of the number is " << ptr << endl;
    
    return 0;
}
