//
//  main.cpp
//  CS2 Project
//
//  Created by Austin Ramsey on 12/13/18.
//  Copyright © 2018 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

//MARK: Function Prototypes
void splitLine(const string &, char, vector<string> &);

bool buildMap(map<string, set<int> > & , vector<string> &);

void indexWrite(map<string, set<int> >);

string removeSpecial(string &);


//MARK: Main Function

int main() {
    fstream fileIn;
    string tempStr;
    bool boolTest;
    fileIn.open("Test.txt", fstream::in);
    vector <string> wordsVector;
    map<string, set<int> > newMap;
    
    if (fileIn.is_open()) {
        while(getline(fileIn,tempStr)) {
            splitLine(tempStr,' ',wordsVector);
        }
        set <string> s (wordsVector.begin(), wordsVector.end()); // storing vector values in a set
        wordsVector.assign(s.begin(), s.end()); // assigning values of set to vector
        sort(wordsVector.begin(),wordsVector.end()); // sorting vectors values
        boolTest = buildMap(newMap, wordsVector); // build the map with words and its line numbers
        indexWrite(newMap); // store map values into a file
    } else {
        cerr << "File Failure";
    }
    
    return 0;
}


//MARK: Function Definitions

// Split the line based on space into words and store them in vector
void splitLine(const string &data, char delimiter, vector<string> &wordsVector) {
    istringstream filedata(data);
    string word;
    
    while(std::getline(filedata, word, delimiter)) {
        word = removeSpecial(word);
        wordsVector.push_back(word);
    }
};

// Build map with words and its line numbers
bool buildMap(map<string, set<int> > &Test, vector<string> &words) {
    fstream f;
    f.open("Test.txt", fstream::in);
    
    if (f.is_open()) {
        for(int i = 0; i < words.size(); i++) {
            string line;
            int num = 1;
            while(getline(f,line)) {
                if(line.find(words[i]) != string::npos) {
                    Test[words[i]].insert(num);
                }
                num++;
            }
            f.clear();
            f.seekg(0, ios::beg); //setting file pointer to the beginning
        }
        
    }
    f.close();
    return true;
};

// Store map values into a file
void indexWrite(map<string, set<int> > newMap) {
    ofstream fl;
    fl.open("Index.txt");
    
    if (fl.is_open()) {
        map<string, set<int> >::iterator mIt;
        set<int>::iterator sIt;
        //this loop is to iterate through map key and values
        for(mIt = newMap.begin(); mIt != newMap.end(); mIt++) {
            fl << mIt->first << " - " ;
            //this loop is to iterate through set values
            for(sIt = mIt->second.begin(); sIt != mIt->second.end(); sIt++) {
                fl << *sIt << " ";
            }
            fl << "\n";
        }
        fl.close();
        cout << "View \"Index.txt\" file for output" << endl;
    } else {
        cerr << "File Failure";
    }
};

//replace any special characters with ''
string removeSpecial(string &str) {
    try {
        if(str.find(",")!= string::npos) {
            str.replace(str.find(","),1,"");
        }
        else if(str.find(".")!= string::npos) {
            str.replace(str.find("."),1,"");
        }
        else if(str.find("\'")!= string::npos) {
            str.replace(str.find("\'"),1,"");
        }
        else if(str.find(":")!= string::npos) {
            str.replace(str.find(":"),1,"");
        }
        else if(str.find(";")!= string::npos) {
            str.replace(str.find(";"),1,"");
        }
    }
    catch(const char* msg) {
        cerr << msg << endl;
    }
    return str;
}
