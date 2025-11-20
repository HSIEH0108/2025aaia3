///week11-1a.cpp
///SOIT106_ADVANCE_004
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	char a;
	while(cin>>a)
	{
		if(islower(a))a=toupper(a);
		else if(isupper(a))a=tolower(a);
		cout << a;
		}
		cout << "\n";
	}
