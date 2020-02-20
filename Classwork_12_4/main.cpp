//
//  main.cpp
//  Classwork_12_4
//
//  Created by Austin Ramsey on 12/4/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main() {
    // Variables
    string fn, ln;
    int sid, m1, d1, y1, m2, d2, y2;
    
    cout << "Enter First Name: ";
    cin >> fn;
    cout << "Enter Last Name: ";
    cin >> ln;
    cout << "Enter Student ID Number (6 digits): ";
    cin >> sid;
    cout << "Enter Admission Month: ";
    cin >> m1;
    cout << "Enter Admission Day: ";
    cin >> d1;
    cout << "Enter Admission Year: ";
    cin >> y1;
    cout << "Enter Graduation Month: ";
    cin >> m2;
    cout << "Enter Graduation Day: ";
    cin >> d2;
    cout << "Enter Graduation Year: ";
    cin >> y2;
    
    Student newStudent(fn, ln, sid, m1, d1, y1, m2, d2, y2);
    newStudent.Display();
    
    cin.get();
    return 0;
}
