// HackerRank Day 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T = 0;
    string S = "";
    int i = 0;
    int j = 0;

    vector<string> vString;

    // get number of strings
    cin >> T;

    cin.ignore();

    // get each string
    for (i = 0; i < T; i++) {
        getline(cin, S);

        vString.push_back(S);

    }

    //loop through strings
    for (i = 0; i < T; i++) {
        // get even letters
        
        S = vString.at(i);

        for (j = 0; j < S.length(); j++) {
            if (j % 2 == 0) {
                cout << S.substr(j,1);
            }
        }
        
        cout << " ";

        // get odd letters
        for (j = 0; j < S.length(); j++) {
            if (j % 2 != 0) {
                cout << S.substr(j,1);
            }
        }

        cout << endl;
    }

    return 0;
}
