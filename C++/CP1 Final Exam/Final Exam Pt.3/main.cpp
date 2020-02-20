//
//  main.cpp
//  Final Exam Pt.3
//
//  Created by Austin Ramsey on 5/1/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
using namespace std;

//Variables
int x;
int y;

//Function Prototypes
int doSomething(int *, int *);

int doSomething(int *y, int *x) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    
    return *x + *y;
}

int main() {
    cout << "Enter a value for x." << endl;
    cin >> x;
    cout << "Enter a value for y" << endl;
    cin >> y;
    cout << "\n";
    
    cout << "Before the function is called..\n"
    << "X is equal to " << x << endl
    << "Y is equal to " << y << endl;
    cout << "\n";
    
    cout << "When the funtion is called..\n"
    << doSomething(&x, &y) << " is returned" << endl;
    cout << "\n";
    
    cout << "After the function is called..\n"
    << "X is equal to " << x << endl
    << "Y is equal to " << y << endl;
    
    cout << "\n";
    cout << "\n";
    cout << "Thank you for using the program" << endl;
    
    return 0;
}
