///week05-2.cpp
///���x stringstream
#include <iostream>///cin cout getlineŪ�g���
#include <sstream>///stringstream�n��
#include <string>
using namespace std;
int main()
{
    cout << "�п�J�@�q�^��A�̭��i���Ů�:";
    string s;
    getline(cin,s);///�̦�Ū�J�@��A��Js
    cout <<"Ū��Fs�r��: "<< s << endl;
    stringstream ss(s);///��r��s�ܦ�ss
    string word;
    while(ss >> word){
        cout << "���@�Ӧr" << word << endl;
    }
}
