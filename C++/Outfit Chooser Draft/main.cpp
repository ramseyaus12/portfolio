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

//To do
//Re-order array values in alphabetic order
//Make it so if one letter is out of place of a answer it will fix it before displaying final attire
//Re-make using a class

string headAttireAll[] = {"Baseball Cap", "Beanie", "None"};
string midsectionAttireRain[] = { "Sweatshirt", "Jacket", "Coat", "Sweater", "Button Up", "Rain Jacket"};
string midsectionAttireSnow[] = {"Sweatshirt", "Jacket", "Coat", "Sweater", "Button Up"};
string midsectionAttireSunshine[] = {"T-Shirt", "Tank-Top", "Button Up", "Sweatshirt"};
string midsectionAttireCloudy[] = {"Long Sleeve Shirt", "T-Shirt", "Button Up", "Sweatshirt", "Jacket", "Sweater"};
string legsAttireCold[] = {"Jeans", "Khakis", "Joggers", "Leggings"};
string legsAttireWarm[] = {"Jeans", "Khakis", "Shorts", "Joggers", "Athletic Shorts", "Skirt", "Leggings"};
string feetAttireCold[] = {"Running Shoes", "Boots", "Heels", "Dress Shoes", "Tennis Shoes"};
string feetAttireWarm[] = {"Sandals", "Running Shoes", "Boots", "Heels", "Dress Shoes", "Tennis Shoes"};
string chosenAttire[5];
string getString;
string weather;

int main() {
    cout << "Outfit Chooser by Austin Ramsey & Luke Sabo" << endl;
    cout << "Continue..." << endl;
    cin.get();
    //Getting weather and basing clothes off that
    cout << "How is the weather today? (Rain, Snow, Sunshine, Cloudy)" << endl;
    cin >> weather;
    weather[0] = toupper(weather[0]);
    if (weather == "Cloudy") {
        weather = "clouds";
    }
    
    if (weather == "Rain") {
        
        cout << "Your options for this weather include:\n\n";
        cout << "Head Attire:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << headAttireAll[i] << endl;
        }
        cout << "\n";
        cout << "Midsection Attire:" << endl;
        for (int i = 0; i < 7; i++) {
            cout << midsectionAttireRain[i] << endl;
        }
        cout << "\n";
        cout << "Legs Attire:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << legsAttireCold[i] << endl;
        }
        cout << "\n";
        cout << "Feet Attire:" << endl;
        for (int i = 0; i < 6; i++) {
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
        for (int i = 0; i < 6; i++) {
            cout << midsectionAttireSnow[i] << endl;
        }
        cout << "\n";
        cout << "Legs Attire:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << legsAttireCold[i] << endl;
        }
        cout << "\n";
        cout << "Feet Attire:" << endl;
        for (int i = 0; i < 6; i++) {
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
        for (int i = 0; i < 5; i++) {
            cout << midsectionAttireSunshine[i] << endl;
        }
        cout << "\n";
        cout << "Legs Attire:" << endl;
        for (int i = 0; i < 8; i++) {
            cout << legsAttireWarm[i] << endl;
        }
        cout << "\n";
        cout << "Feet Attire:" << endl;
        for (int i = 0; i < 7; i++) {
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
            for (int i = 0; i < 7; i++) {
                cout << midsectionAttireCloudy[i] << endl;
            }
            cout << "\n";
            cout << "Legs Attire:" << endl;
            for (int i = 0; i < 8; i++) {
                cout << legsAttireWarm[i] << endl;
            }
            cout << "\n";
            cout << "Feet Attire:" << endl;
            for (int i = 0; i < 7; i++) {
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
            for (int i = 0; i < 7; i++) {
                cout << midsectionAttireCloudy[i] << endl;
            }
            cout << "\n";
            cout << "Legs Attire:" << endl;
            for (int i = 0; i < 5; i++) {
                cout << legsAttireCold[i] << endl;
            }
            cout << "\n";
            cout << "Feet Attire:" << endl;
            for (int i = 0; i < 6; i++) {
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
            cout << "You did not enter a correct response." << endl;
        }
        
    } else {
        cout << "The weather you entered is not compatible with this program. Please try again." << endl;
    }
    weather[0] = tolower(weather[0]);
    cout << "I see the weather calls for " << weather << ", your choices for attire are:" << endl;
    cout << "\n";
    cout << "Head Attire: " << chosenAttire[0] << endl;
    cout << "Midsection Attire: " << chosenAttire[1] << endl;
    cout << "Legs Attire: " << chosenAttire[2] << endl;
    cout << "Feet Attire: " << chosenAttire[3] << endl;
    cout << "\n";
    cout << "*These are just suggestions*" << endl;
    cout << "Thank you for using the application." << endl;
    
    
    return 0;
}
