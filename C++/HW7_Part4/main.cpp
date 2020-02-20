//
//  main.cpp
//  HW7_Part4
//
//  Created by Austin Ramsey on 11/26/18.
//  Copyright © 2018 Recon Development. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

template <typename T>
void readData(vector<T> &v,int size,const char file_name[]){
    string str;
    ifstream file(file_name);
    int i=0;
    while(i < size){
        file >> str;//get each line text into string
        v[i] = str;//insert string into vector
        i++;
    }
}

void playGame(vector<string> state,vector<string> capital,int size){
    int correct = 0, incorrect = 0;
    string input;
    for (int i = 0; i < size; i++){
        cout << "\nWhat is capital of " << state.at(i)<< " ";
        cin >> input;
        for (int j = 0; j < size; j++)
            if (input==capital.at(j)) {
                correct++;
            } else {
                incorrect++;
            }
        
    }
    cout << "\nCorrect answers: " << correct;
    cout << "\nIncorrect answers: " << incorrect;
    
}

int main(){
    int size = 7;
    vector<string> state(size),capital(size);
    readData(state, size,"state.txt");//read file state.txt and insert to vector state
    readData(capital, size,"capital.txt");//read file capital.txt and insert to vector
    
    playGame(state, capital, size);
    
    return 0;
}
