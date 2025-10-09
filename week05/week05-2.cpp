///week05-2.cpp
///熟悉 stringstream
#include <iostream>///cin cout getline讀寫資料
#include <sstream>///stringstream要它
#include <string>
using namespace std;
int main()
{
    cout << "請輸入一段英文，裡面可有空格:";
    string s;
    getline(cin,s);///依次讀入一行，放入s
    cout <<"讀到了s字串: "<< s << endl;
    stringstream ss(s);///把字串s變成ss
    string word;
    while(ss >> word){
        cout << "有一個字" << word << endl;
    }
}
