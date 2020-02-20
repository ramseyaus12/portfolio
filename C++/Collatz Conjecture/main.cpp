//
//  main.cpp
//  Collatz Conjecture
//
//  Created by Austin Ramsey on 12/19/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>

//MARK: Functions
bool isEven(int num) {
    return num % 2 == 0;
}

bool isValid(int num) {
    return num >= 0;
}

int calculateInput(int prev) {
    if (isValid(prev)) {
        if (isEven(prev)) {
            return prev / 2;
        } else {
            return prev * 3 + 1;
        }
    }
    return 0;
}

void calculateLoop(int num) {
    if (isValid(num)) {
        while (num != 1) {
            if (isEven(num)) {
                num = num / 2;
            } else {
                num = num * 3 + 1;
            }
        }
    } else {
        std::cout << "Not a valid input.\n";
    }
}

//MARK: Main Function
int main() {
    char calc;
    std::cout << "Use loop? (y or n)\n";
    std::cin >> calc;
    
    if (calc == 'y') {
        for (int i = 2; i <= 200000 && i > 1; i++) {
            calculateLoop(i);
            std::cout << i << " becomes 1\n";
        }
    }
    
    int input;
    std::cout << "Enter an integer greater than zero:\n";
    std::cin >> input;
    
    if (isValid(input)) {
        while (input != 1) {
            input = calculateInput(input);
            std::cout << input << " ";
        }
        std::cout << "\nNumber is equivalent to 1\n";
    } else {
        std::cout << "Not a valid input.\n";
        return 0;
    }
    
    return 0;
}

