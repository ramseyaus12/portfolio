//
//  main.cpp
//  Sorting Test
//
//  Created by Austin Ramsey on 4/21/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//Array created
const int ARRAY_SIZE = 10;
int arr[ARRAY_SIZE];

int linearSearch(int arr[], int size, int value) {
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < size && !found) {
        if (arr[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}

int binarySearch(int arr[], int size, int value) {
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    bool found = false;
    
    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (arr[middle] == value) {
            found = true;
            position = middle;
        } else if (arr[middle] > value) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return position;
}

int main() {
    
    int locateValue;
    char option;
    
    cout << "This program is used for searching an array and finding a specified value." << endl;
    cout<< "Enter 10 values to put into the array." << endl;
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> arr[i];
        }
    
    cout << "What value would you like to find?" << endl;
    cin >> locateValue;
    cout << "Is the array you created linear? (y or n)" << endl;
    cin >> option;
    
    if (option == 'y') {
        int located = binarySearch(arr, ARRAY_SIZE, locateValue);
        if (located == -1) {
            cout << "The value you are looking for could not be found." << endl;
        } else {
            cout << "The value you are looking for is located at index: " << located << endl;
        }
    } else {
        int located = linearSearch(arr, ARRAY_SIZE, locateValue);
        if (located == -1) {
            cout << "The value you are looking for could not be found." << endl;
        } else {
            cout << "The value you are looking for is located at index: " << located << endl;
        }
    }

    cin.get();
    return 0;
}
