//
//  main.cpp
//  C++ Test
//
//  Created by Austin Ramsey on 4/18/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int Size = 10000;
int barNum[Size];
int numberLines = 0;

int main() {
    cout << "Enter a number." << endl;
    cin >> numberLines;
    
    for (int i = 0; i < numberLines; i++) {
        barNum[i] = i+1;
    }
    for (int i = 0; i < numberLines; i++) {
        cout << barNum[i] << endl;
    }
    cin.get();
    return 0;
}
