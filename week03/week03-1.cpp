///week03-1.cpp �ǲ�C++���}�C vector<int>a;
///File-Save As �s�ɤQ�A�n���ɦW�g��
#include<iostream>
#include<vector>///C++���}�C vector
using namespace std;
int main()
{
    vector<int> a(2);///���Ӱ}�C�̭���2��(�}�C���j�p��2)

    for(int i=0;i<a.size(); i++) cout << a[i] << ' ';///�L�X�}�C

    cout << endl ;///����

    a.push_back(99);///��99����}�Ca���᭱
    a.push_back(77);///��77����}�Ca���᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';///�L�X�}�C
    cout << endl;
}
