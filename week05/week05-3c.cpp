///week05-3c.cpp
///CPE �a2�D UVA 483 �˹L��
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;///Ū�@����
    while (getline(cin,line)){///Ū�i��
        stringstream ss(line);
        string word;
        ss >> word;
        reverse(word.begin(),word.end());
        cout << word;
        while(ss >> word){
            reverse(word.begin(),word.end());
            cout << " "<<word;
            ///cout << "Ū��F" << word << endl;
    }

        cout << endl;///cout << line << endl; ///Part 2:Output
    }
}
