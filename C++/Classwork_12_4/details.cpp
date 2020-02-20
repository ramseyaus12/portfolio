//
//  details.cpp
//  Classwork_12_4
//
//  Created by Austin Ramsey on 12/4/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <stdio.h>
#include "header.h"

Date::Date() {
    month = 0;
    day = 0;
    year = 0;
}

Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

Date::Date(Date &obj) {
    month = obj.month;
    day = obj.day;
    year = obj.year;
}

int Date::getMonth() {
    return month;
}

int Date::getDay() {
    return day;
}

int Date::getYear() {
    return year;
}

Student::Student(string fn, string ln, int sid, int m1, int d1, int y1, int m2, int d2, int y2):admDate(m1,d1,y1), gradDate(m2,d2,y2) {
    firstName = fn;
    lastName = ln;
    studentId = sid;
}

Date Student::getAdmDate() {
    return admDate;
}

Date Student::getGradDate() {
    return gradDate;
}

int Student::getStudentId() {
    return studentId;
}

void Student::Display() {
    cout << "Student Information: " << endl;
    cout << endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Student ID: " << studentId << endl;
    cout << "Admission Date: " << admDate.getMonth() << "/" << admDate.getDay() << "/" << admDate.getYear() << endl;
    cout << "Graduation Date: " << gradDate.getMonth() << "/" << gradDate.getDay() << "/" << gradDate.getYear() << endl;
}
