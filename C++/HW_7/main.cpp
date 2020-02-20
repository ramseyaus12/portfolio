//
//  main.cpp
//  HW_7
//
//  Created by Austin Ramsey on 11/23/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>
#include <set>

using namespace std;


void loadCourse(map <string, string> &room, map <string, string> &instructor, map <string, string> &meetTime) {
    
    room.insert(pair <string, string>("CS201", "S-204"));
    instructor.insert(pair <string, string>("CS201", "Johnson"));
    meetTime.insert(pair <string, string>("CS201", "2:00 pm"));
    
    room.insert(pair <string, string>("CS202", "S-218"));
    instructor.insert(pair <string, string>("CS202", "Detar"));
    meetTime.insert(pair <string, string>("CS202", "4:30 pm"));
    
    room.insert(pair <string, string>("CS203", "M-116"));
    instructor.insert(pair <string, string>("CS203", "Filings"));
    meetTime.insert(pair <string, string>("CS203", "11:00 am"));
    
    room.insert(pair <string, string>("CS204", "S-308"));
    instructor.insert(pair <string, string>("CS204", "Avila"));
    meetTime.insert(pair <string, string>("CS204", "7:00 pm"));
    
    room.insert(pair <string, string>("CS205", "S-202"));
    instructor.insert(pair <string, string>("CS205", "Huver"));
    meetTime.insert(pair <string, string>("CS205", "9:00 am"));
    
    room.insert(pair <string, string>("CS206", "M-211"));
    instructor.insert(pair <string, string>("CS206", "Jones"));
    meetTime.insert(pair <string, string>("CS206", "5:15 pm"));
    
}

int main() {
    
    //MARK: Part 1
    
    // Creating array object with size 5
    array<string, 5> contactNames{};
    
    string tempStr; // Temporary string to hold user values
    for (int i = 0; i < 5; i++) {
        cout << "Enter Name " << i + 1 << " : ";
        cin >> tempStr; // Getting name from user
        
        contactNames[i] = tempStr; // Adding name to array
    }
    
    // Creating iterator
    array<string, 5>::iterator nameIt;
    
    cout << "\nNames Entered:" << endl;
    for (nameIt = contactNames.begin(); nameIt != contactNames.end(); nameIt++) {
        cout << *nameIt << endl;
    }
    cout << endl; // Space
    
    // Creating integer array object with size 4
    array<int, 4> num{};
    
    int tempInt; // Temporary integer to hold user values
    for (int i = 0; i < 4; i++) {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> tempInt; // Getting number from user
        
        num[i] = tempInt; //adding number to array
    }
    
    cout << "\nNumbers Entered:" << endl;
    for (auto numberIt = num.begin(); numberIt != num.end(); numberIt++) {
        cout << *numberIt << endl;
    }
    cout << endl; // Space
    
    // Creating float array object with size 4
    array<float, 4> flo{};
    
    float tempFloat; // Temporary float to hold user values
    for (int i = 0; i < 4; i++) {
        cout << "Enter Float Number " << i + 1 << " : ";
        cin >> tempFloat; // Getting float number from user
        
        flo[i] = tempFloat; //adding float number to array
    }
    
    cout << "\nFloat Numbers Entered:" << endl;
    for (auto floatIt = flo.rbegin(); floatIt != flo.rend(); floatIt++){
        cout << *floatIt << endl;
    }
    
    //MARK: Part 2
    
    // Creating two vector objects
    vector<int> vec1 = {1,2,3,4};
    vector<int> vec2 = {33,44,55,66,77,88,99};
    
    // Iterator pointing to third element
    auto vecIt = vec1.begin() + 2;
    
    // Inserting part of vec2 into vec1
    vec1.insert(vecIt, vec2.begin() + 2, vec2.end() - 1);
    
    // Printing vector
    for (auto element : vec1) {
        cout << element << ", ";
    }
    
    //MARK: Part 3
    
    map<string, string> meetTime;
    map<string, string> instructor;
    map<string, string> room;
    loadCourse(room, instructor, meetTime);
    string courseName, roomNum = "", instructorName = "", time = "";
    
    cout << "Enter course number (from CS201 - CS206): ";
    cin >> courseName;
    map <string, string >::iterator it;
    
    for (it = room.begin(); it != room.end(); it++) {
        if (it->first.compare(courseName) == 0) {
            roomNum = it->second;
            break;
        }
    }
    
    for (it = instructor.begin(); it != instructor.end(); it++) {
        if (it->first.compare(courseName) == 0) {
            instructorName = it->second;
            break;
        }
    }
    
    for (it = meetTime.begin(); it != meetTime.end(); it++) {
        if (it->first.compare(courseName) == 0) {
            time = it->second;
            break;
        }
    }
    
    cout << "Course Number: " << courseName << endl;
    if (roomNum != "") {
        cout << "Room Number: " << roomNum << endl;
    }
    if (instructorName != "") {
        cout << "Instructor: " << instructorName << endl;
    }
    if (time != "") {
        cout << "Time: " << time << endl;
    }
    
    cout << endl;
    
    // Getting data from user
    cout << "Enter Course Number (Ex: SC20?): ";
    cin >> courseName;
    cout << "Enter Room Number (Ex: S-2??): ";
    cin >> roomNum;
    cout << "Enter Instructor Name: ";
    cin >> instructorName;
    cout << "Enter Time (Ex: ?:?? am/pm): ";
    cin >> time;
    
    for (it = room.begin(); it != room.end(); it++) {
        if (it->first.compare(courseName) == 0) {
            roomNum = it->second;
            break;
        }
    }
    
    for (it = instructor.begin(); it != instructor.end(); it++) {
        if (it->first.compare(courseName) == 0) {
            instructorName = it->second;
            break;
        }
    }
    
    for (it = meetTime.begin(); it != meetTime.end(); it++) {
        if (it->first.compare(courseName) == 0) {
            time = it->second;
            break;
        }
    }
    
    cout << "User entered..." << endl;
    cout << "Course Number: " << courseName << endl;
    if (roomNum != "") {
        cout << "Room Number: " << roomNum << endl;
    }
    if (instructorName != "") {
        cout << "Instructor: " << instructorName << endl;
    }
    if (time != "") {
        cout << "Time: " << time << endl;
    }
    
    return 0;
}
