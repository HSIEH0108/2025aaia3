///week05-3b.cpp
///CPE 地2題 UVA 483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;///讀一行資料
    while (getline(cin,line)){///讀進來
        stringstream ss(line);
        string word;
        while(ss >> word){
            reverse(word.begin(),word.end());
            cout << "讀到了" << word << endl;
    }

        cout << line << endl; ///Part 2:Output
    }
}
