///week07-2.cpp ���e�P�P�@��
///�e�X�W�j������ΡA�Ʀr�]�_��
///TAICA ��j��¦�{���]�p(c++)�����ҲĤ��D
#include <iostream>
#include <cmath>///�N�Oc��math.h��sin() cos() abs()
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<n*2;i++){
        for(int j=1;j<n*2;j++){
            ///�L�X����A�o�{������1�ܦ��N��
            int d = max(abs(i-n),abs(j-n));
            cout << d+1;
        }
        cout << endl;///cout << "�{�bi�O: " << i << endl; ///�Ӽh����
    }
}
