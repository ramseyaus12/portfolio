//
//  header.h
//  Classwork_12_4
//
//  Created by Austin Ramsey on 12/4/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef header_h
#define header_h

// Data Class
class Date {
private:
    // Variables
    int month, day, year;
    
public:
    // Constructor
    Date();
    Date(int m, int d, int y);
    // Accessor Functions
    int getMonth();
    int getDay();
    int getYear();
    
    Date(Date &obj);
};

// Student Class
class Student {
private:
    // Variables
    int studentId;
    string firstName, lastName;
    Date admDate, gradDate;
    
public:
    // Constructors
    Student(string fn, string ln, int sid, int m1, int d1, int y1, int m2, int d2, int y2);
    // Accessor Functions
    Date getAdmDate();
    Date getGradDate();
    int getStudentId();

    void Display();
};

#endif /* header_h */
