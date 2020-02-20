//  main.cpp
//  Final Exam Project
//
//  Created by Austin Ramsey on 4/30/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

//Base class created
class ProductionWorker {
protected:
    float hourPayRate;
    string employeeFirstName;
    string employeeLastName;
    int employeeNumber;
    string hireDate;
    string shiftOption;
    string shift1;
    string shift2;
public:
    ProductionWorker()
    { hourPayRate = 14.51; employeeFirstName = ""; employeeLastName = ""; employeeNumber = 0; shiftOption = "";
    shift1 = "day shift"; shift2 = "night Shift";}
    void setEmployeeFirstName(string);
    void setEmployeeLastName(string);
    void setEmployeeNum(int);
    void setHireDate(string);
    void setShift(string);
    float getHourRate() const
    { return hourPayRate; }
    string getEmployeeFirstName() const
    { return employeeFirstName; }
    string getEmployeeLastName() const
    { return employeeLastName; }
    int getEmployeeNum() const
    { return employeeNumber; }
    string getHireDate() const
    { return hireDate; }
    string getShiftOption() const
    { return shiftOption; }
    string getShift1()
    { return shift1; }
    string getShift2()
    { return shift2; }
    
};

//Derived class from ProductionWorker created
class TeamLeader:public ProductionWorker {
private:
    int monthlyBonus;
    int requiredHours;
    int attendedHours;
public:
    TeamLeader()
    { monthlyBonus = 2000; requiredHours = 24; attendedHours = 0;}
    void setAttendedHours(int);
    int getBonus() const
    { return monthlyBonus; }
    int getReqHours() const
    { return requiredHours; }
    int getAttendedHours() const
    { return attendedHours; }
};

//Assigns value to employeeFirstName member
void ProductionWorker::setEmployeeFirstName(string str) {
    employeeFirstName = str;
}

//Assigns value to employeeLastName member
void ProductionWorker::setEmployeeLastName(string str) {
    employeeLastName = str;
}

//Assigns value to employeeNum member
void ProductionWorker::setEmployeeNum(int num) {
    employeeNumber = num;
}

//Assigns value to hireDate member
void ProductionWorker::setHireDate(string str) {
    hireDate = str;
}

//Assigns value to shiftOption member
void ProductionWorker::setShift(string str) {
    shiftOption = str;
}

//Assigns value to requiredHours member
void TeamLeader::setAttendedHours(int num) {
    attendedHours = num;
}

int main() {
    //Local variable
    string str;
    int integer;
    
    //Creating instance: New team leader
    TeamLeader newLeader;
    
    cout << "Welcome, what is your first name?" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    newLeader.setEmployeeFirstName(str);
    cout << "Last name?" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    newLeader.setEmployeeLastName(str);
    cout << "\n";
    cout << "Please enter todays date. (xx/xx/xx)" << endl;
    cin >> str;
    newLeader.setHireDate(str);
    cout << "\n";
    cout << "Next you will be assigned a 4 digit employee number. What would you like this number to be?" << endl;
    cin >> integer;
    newLeader.setEmployeeNum(integer);
    cout << "\n";
    cout << "Perfect, now your set wage will be " << newLeader.getHourRate() << " dollars per hour and you will recieve a monthly bonus of " << newLeader.getBonus() << " dollars as well." << endl;
    cout << "\n";
    cout << "As a team leader you are required to log " << newLeader.getReqHours() << " training hours a year." << endl;
    cout << "How many do you currently have?" << endl;
    cin >> integer;
    newLeader.setAttendedHours(integer);
    cout << "\n";
    cout << "The last thing I require is your desired shift. Would you like to work the " << newLeader.getShift1() << " or the " << newLeader.getShift2() << "? (day or night)" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    if (str == "Day") {
        string a = "Day shift";
        newLeader.setShift(a);
    } else if (str == "Night") {
        string a = "Night shift";
        newLeader.setShift(a);
    }
    cout << "\n";
    cout << "Thank you for your time, we will see you tomorrow for work." << endl;
    cout << "\n";
    cout << "\n";
    cout << "*Employee File*" << endl;
    cout << "Name: " << newLeader.getEmployeeFirstName() << " " << newLeader.getEmployeeLastName() << endl;
    cout << "Date Hired: " << newLeader.getHireDate() << endl;
    cout << "Employee Number: " << newLeader.getEmployeeNum() << endl;
    cout << "Wage (per hour): " << newLeader.getHourRate() << endl;
    cout << "Bonus: " << newLeader.getBonus() << endl;
    cout << "Required Training Hours: " << newLeader.getReqHours() << "    Logged Hours: " << newLeader.getAttendedHours() << endl;
    cout << "Shift: " << newLeader.getShiftOption() << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "Thank you for using the application." << endl;
    
    cin.get();
    return 0;
}
