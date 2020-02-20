//  main.cpp
//  R&R Project
//
//  Created by Austin Ramsey on 4/30/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//Variables
string str;
string restart;
int yesCount;
int noCount;
int lineSpace = 10;

//Function Prototypes
void continuedStory();
void yesNoCalc();
void yesNoCount();
void makeSpace();

void yesNoCount() {
    if (str == "Yes") {
        yesCount++;
    } else if (str == "No") {
        noCount++;
    }
}
void yesNoCalc() {
    if (yesCount < noCount) {
        cout << "According to your responses you believe that the use of nuclear weapons is unethical." << endl;
        cout << "\n";
    } else {
         cout << "According to your responses you believe that the use of nuclear weapons is ethical." << endl;
        cout << "\n";
    }
}

void makeSpace() {
    for (int i = 0; i < lineSpace; i++) {
        cout << "\n";
        if (lineSpace == 8) {
            while (i == 2) {
                cout << "Continuing on.." << endl;
                i++;
            }
        }
    }
}

void continuedStory() {
    lineSpace = 8;
    cout << "Now, you will be presented with an argument and a counter argument about the ethics of nuclear weapons. One will be in favor of the use of nuclear weapons, and the other one will not. Afterward you will be asked about your opinion of the arguments." << endl;
    cout << "\n";
    cout << "Argument One: The use of nuclear weapons has the potential of ruining and killing millions of lives. This is not ethically acceptable anywhere, the suffering of innocent civilians because of the acts their country committed is wrong." << endl;
    cout << "\n";
    cout << "Counter Argument: The use of nuclear weapons is ethical when an enemy state threatens to corrupt the rest of the world, in fact it is the moral and ethical duty of any super power to diminish this enemy state." << endl;
    cout << "\n";
    cout << "Do you agree with the counter argument? (Yes or No)" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    yesNoCount();
    makeSpace();
    cout << "\n";
    cout << "Argument Two: The construction and storage of nuclear weapons is a threat to the public. People are worried because accidents can occur, including the release of an unauthorized missle or theft of missles." << endl;
    cout << "\n";
    cout << "Counter Argument: In past years engineers have been working on new technologies to improve the safety and architecture of nuclear weapons. An example of this is the implimentation of new antineutrino detectors in nuclear reactors, as well as the unique serial numbers found on every piece of the bomb that must match each other in order for the bomb to work." << endl;
    cout << "\n";
    cout << "Do you agree with the counter argument? (Yes or No)" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    yesNoCount();
    makeSpace();
    cout << "\n";
    cout << "Argument Three: Little Boy and Fat Man were dropped on Hiroshima and Nagasaki during World War II. This is the biggest nuclear genocide in history, killing hundreds of thousands of innocent civilians. Proof of the unethical destruction these weapons are capable of." << endl;
    cout << "\n";
    cout << "Counter Argument: The dropping of the nuclear weapons on Japan saved more lives than would have been lost, the Japanese had planned to gather over 2 million ground soldiers and 10,000 kamikaze planes in a last suicidal defense. The total death toll of Hiroshima and Nagasaki combined was 194,000 lives. If freedom and a secure future are the highest values, then the use of nuclear weapons to secure those values are justifiable, even if that means millions die." << endl;
    cout << "\n";
    cout << "Do you agree with the counter argument? (Yes or No)" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    yesNoCount();
    makeSpace();
    cout << "\n";
}

int main() {
    if (restart == "Yes") {
        makeSpace();
    }
    cout << "Rethink & Research Project\n\nEthics of Nuclear Weapons" << endl;
    cout << "\n";
    cout << "Do you think the use of nuclear weapons is ethical? (Yes or No)" << endl;
    cin >> str;
    str[0] = toupper(str[0]);
    cout << "\n";
    if (str == "Yes") {
        cout << "I agree, let's discuss." << endl;
        cout << "\n";
        continuedStory();
        
    } else if (str == "No") {
        cout << "I used to think that, let's discuss." << endl;
        cout << "\n";
        continuedStory();
        
    } else {
        cout << "Enter a valid response please." << endl;
        cout << "\n";
        return main();
    }
    lineSpace = 16;
    yesNoCalc();
    cout << "\n";
    cout << "Thank you for using the application.\n--- Austin Ramsey ---" << endl;
    cout << "\n";
    cout << "Start over? (Yes or No)" << endl;
    cin >> restart;
    restart[0] = toupper(restart[0]);
    if (restart == "Yes") {
        makeSpace();
        return main();
    }
    cin.get();
    return 0;
}
