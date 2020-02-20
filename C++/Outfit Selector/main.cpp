//
//  main.cpp
//  Outfit Chooser
//
//  Created by Austin Ramsey on 4/19/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//Variables
string headAttireAll[] = { "Baseball Cap", "Beanie", "None" };
string midsectionAttireRain[] = { "Button Up","Coat","Jacket","Rain Jacket", "Sweater", "Sweatshirt", };
string midsectionAttireSnow[] = { "Sweatshirt", "Jacket", "Coat",
    "Sweater", "Button up" };
string midsectionAttireSunshine[] = { "Button Up", "Sweatshirt", "T-Shirt", "Tank-Top",  };
string midsectionAttireCloudy[] = { "Button Up", "Jacket", "Long Sleeve Shirt", "Sweatshirt", "Sweater", "T-Shirt",  };
string legsAttireCold[] = { "Jeans", "Khakis", "Joggers", "Leggings" };
string legsAttireWarm[] = { "Athletic Shorts", "Jeans", "Joggers", "Khakis","Leggings", "Shorts", "Skirt",  };
string feetAttireCold[] = { "Boots", "Dress Shoes", "Heels", "Running Shoes", "Tennis Shoes"};
string feetAttireWarm[] = { "Boots", "Dress Shoes", "Heels", "Running Shoes", "Sandals", "Tennis Shoes" };
string chosenAttire[5];
string getString;
string weather;
bool stop;
bool cmpBool = false;

//Function Prototypes
void finishFunc(string arr[]);

//Functions
void finishFunc(string arr[], string str) {
    if (str == "Cloudy") {
        str = "clouds";
    }
    str[0] = tolower(str[0]);
    cout << "\n";
    cout << "I see the weather calls for " << str << ", your choices for attire are:" << endl;
    cout << "\n";
    cout << "Head Attire: " << arr[0] << endl;
    cout << "Midsection Attire: " << arr[1] << endl;
    cout << "Legs Attire: " << arr[2] << endl;
    cout << "Feet Attire: " << arr[3] << endl;
    cout << "\n";
    cout << "*These are just suggestions*" << endl;
    cout << "Thank you for using the application." << endl;
}

int main() {
    cout << "Outfit Selector by Austin Ramsey & Luke Sabo" << endl;
    cout << "Continue..." << endl;
    cin.get();
    //Getting weather from user and deciding outfit from there
    cout << "How is the weather today? (Rain, Snow, Sunshine, Cloudy)" << endl;
    cin >> weather;
    weather[0] = toupper(weather[0]);
    
    if (weather == "Rain") {
        
        cout << "Your options for this weather include:\n\n";
        cout << "Head Attire:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << headAttireAll[i] << endl;
        }
        cout << "\n";
        cout << "Midsection Attire:" << endl;
        for (int i = 0; i < 6; i++) {
            cout << midsectionAttireRain[i] << endl;
        }
        cout << "\n";
        cout << "Legs Attire:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << legsAttireCold[i] << endl;
        }
        cout << "\n";
        cout << "Feet Attire:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << feetAttireCold[i] << endl;
        }
        //Getting input from user about what to wear
        cout << "\n";
        cout << "What would you like to wear on your head?" << endl;
        cin.get();
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[0] = getString;
        cout << "What would you like to wear on your midsection?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[1] = getString;
        cout << "What would you like to wear on your legs?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[2] = getString;
        cout << "What would you like to wear on your feet?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[3] = getString;
        
    } else if (weather == "Snow") {
        
        cout << "Your options for this weather include:\n\n";
        cout << "Head Attire:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << headAttireAll[i] << endl;
        }
        cout << "\n";
        cout << "Midsection Attire:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << midsectionAttireSnow[i] << endl;
        }
        cout << "\n";
        cout << "Legs Attire:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << legsAttireCold[i] << endl;
        }
        cout << "\n";
        cout << "Feet Attire:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << feetAttireCold[i] << endl;
        }
        //Getting input from user about what to wear
        cout << "\n";
        cout << "What would you like to wear on your head?" << endl;
        cin.get();
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[0] = getString;
        cout << "What would you like to wear on your midsection?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[1] = getString;
        cout << "What would you like to wear on your legs?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[2] = getString;
        cout << "What would you like to wear on your feet?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[3] = getString;
        
    } else if (weather == "Sunshine") {
        
        cout << "Your options for this weather include:\n\n";
        cout << "Head Attire:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << headAttireAll[i] << endl;
        }
        cout << "\n";
        cout << "Midsection Attire:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << midsectionAttireSunshine[i] << endl;
        }
        cout << "\n";
        cout << "Legs Attire:" << endl;
        for (int i = 0; i < 7; i++) {
            cout << legsAttireWarm[i] << endl;
        }
        cout << "\n";
        cout << "Feet Attire:" << endl;
        for (int i = 0; i < 6; i++) {
            cout << feetAttireWarm[i] << endl;
        }
        //Getting input from user about what to wear
        cout << "\n";
        cout << "What would you like to wear on your head?" << endl;
        cin.get();
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[0] = getString;
        cout << "What would you like to wear on your midsection?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[1] = getString;
        cout << "What would you like to wear on your legs?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[2] = getString;
        cout << "What would you like to wear on your feet?" << endl;
        getline(cin, getString);
        getString[0] = toupper(getString[0]);
        chosenAttire[3] = getString;
        
    } else if (weather == "Cloudy") {
        string warmCold;
        cout << "Is it warm or cold?" << endl;
        cin >> warmCold;
        warmCold[0] = toupper(warmCold[0]);
        if (warmCold == "Warm") {
            
            cout << "Your options for this weather include:\n\n";
            cout << "Head Attire:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << headAttireAll[i] << endl;
            }
            cout << "\n";
            cout << "Midsection Attire:" << endl;
            for (int i = 0; i < 6; i++) {
                cout << midsectionAttireCloudy[i] << endl;
            }
            cout << "\n";
            cout << "Legs Attire:" << endl;
            for (int i = 0; i < 7; i++) {
                cout << legsAttireWarm[i] << endl;
            }
            cout << "\n";
            cout << "Feet Attire:" << endl;
            for (int i = 0; i < 6; i++) {
                cout << feetAttireWarm[i] << endl;
            }
            //Getting input from user about what to wear
            cout << "\n";
            cout << "What would you like to wear on your head?" << endl;
            cin.get();
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[0] = getString;
            cout << "What would you like to wear on your midsection?" << endl;
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[1] = getString;
            cout << "What would you like to wear on your legs?" << endl;
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[2] = getString;
            cout << "What would you like to wear on your feet?" << endl;
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[3] = getString;
            
        } else if (warmCold == "Cold") {
            
            cout << "Your options for this weather include:\n\n";
            cout << "Head Attire:" << endl;
            for (int i = 0; i < 3; i++) {
                cout << headAttireAll[i] << endl;
            }
            cout << "\n";
            cout << "Midsection Attire:" << endl;
            for (int i = 0; i < 6; i++) {
                cout << midsectionAttireCloudy[i] << endl;
            }
            cout << "\n";
            cout << "Legs Attire:" << endl;
            for (int i = 0; i < 4; i++) {
                cout << legsAttireCold[i] << endl;
            }
            cout << "\n";
            cout << "Feet Attire:" << endl;
            for (int i = 0; i < 5; i++) {
                cout << feetAttireCold[i] << endl;
            }
            //Getting input from user about what to wear
            cout << "\n";
            cout << "What would you like to wear on your head?" << endl;
            cin.get();
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[0] = getString;
            cout << "What would you like to wear on your midsection?" << endl;
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[1] = getString;
            cout << "What would you like to wear on your legs?" << endl;
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[2] = getString;
            cout << "What would you like to wear on your feet?" << endl;
            getline(cin, getString);
            getString[0] = toupper(getString[0]);
            chosenAttire[3] = getString;
            
        } else {
            cout << "You did not enter a correct response, start over." << endl;
            cout << "\n";
            return main();
        }
        
    } else {
        cout << "The weather you entered is not compatible, start over." << endl;
        cout << "\n";
        return main();
    }
    
    finishFunc(chosenAttire, weather);
    
    return 0;
}

