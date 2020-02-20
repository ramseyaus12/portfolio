//
//  main.cpp
//  30
//
//  Created by Austin Ramsey on 10/30/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    // Part 1
    
    // Creating array
    array<string, 5> contactNames;
    
    // Getting 5 contact names from user and saving them to the array
    for(int i = 0; i < 5; i++) {
        string saveString;
        cout << "Enter the name of contact #" << i+1 << ": " << endl;
        cin >> saveString;
        contactNames[i] = saveString;
    }
    
    // Creating iterator
    array<string, 5>::iterator nameIt;
    
    cout << "Contact names:" << endl;
    
    // Getting original contact names using the iterator
    for(nameIt = contactNames.begin(); nameIt != contactNames.end(); nameIt++) {
        cout << *nameIt << endl;
    }
    
    
    
    // Creating array
    array<int, 4> num;
    
    // Getting 4 contact numbers from user and saving them to the array
    for(int i = 0; i < 4; i++) {
        int saveNum;
        cout << "Enter the number of contact #" << i+1 << ": " << endl;
        cin >> saveNum;
        num[i] = saveNum;
    }
    
    cout << "Contact numbers:" << endl;
    
    // Getting original contact numbers using the iterator
    for(auto it = num.begin(); it != num.end(); it++) {
        cout << *it << endl;
    }
    
    
    
    // Creating array
    array<float, 4> flo;
    
    // Getting 4 contact numbers from user and saving them to the array
    for(int i = 0; i < 4; i++) {
        float saveNum;
        cout << "Enter the number of contact #" << i+1 << ": " << endl;
        cin >> saveNum;
        flo[i] = saveNum;
    }
    
    // Creating reverse iterator
    array<float, 4>::reverse_iterator revIt;
    
    cout << "Contact numbers reverse:" << endl;
    
    // Getting original contact numbers using the reverse iterator
    for(revIt = flo.rbegin(); revIt != flo.rend(); revIt++) {
        cout << *revIt << endl;
    }
    
    // Part 2
    
    
    
    
    cin.get();
    return 0;
}
