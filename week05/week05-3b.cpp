///week05-3b.cpp
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
        while(ss >> word){
            reverse(word.begin(),word.end());
            cout << "Ū��F" << word << endl;
    }

        cout << line << endl; ///Part 2:Output
    }
}
