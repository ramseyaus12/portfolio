//
//  main.cpp
//  classwork_9_30
//
//  Created by Austin Ramsey on 9/30/19.
//  Copyright © 2019 Austin Ramsey. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;


int main() {
    
    const vector<int> L = {2, 4, 8, 16, 32, 64, 128};
    const vector<int> P = {1, 2, 3, 4};
    
    for (int i = 0; i < P.size(); i++) {
        cout << L[P[i]] << endl; //->> T(n) = O(P)
    }
    
    list<int> listOne;
    list<int> listTwo;
    
    deque<int> list;
    
    //cin.get();
    return 0;
}
