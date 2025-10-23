///week07-2.cpp 像畫星星一樣
///畫出超大的正方形，數字包起來
///TAICA 交大基礎程式設計(c++)期中考第六題
#include <iostream>
#include <cmath>///就是c的math.h有sin() cos() abs()
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<n*2;i++){
        for(int j=1;j<n*2;j++){
            ///印出之後，發現正中的1很有意思
            int d = max(abs(i-n),abs(j-n));
            cout << d+1;
        }
        cout << endl;///cout << "現在i是: " << i << endl; ///樓層概念
    }
}
