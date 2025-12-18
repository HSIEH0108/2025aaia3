///week15-3.cpp 厩策璸礶 Math 程肈程螟
///LeetCode 50. Pow(x, n) тXnΩよ
///螟: (1)n 琌0Ωよ(﹚Α1)
///(2)n狦琌璽璶跑Θ(1/x)(-nΩよ)
class Solution {
public:
    double myPow(double x,long long int n) {
        if(n==0)return 1; ///砏玥(1)
        if(n<0)return myPow(1/x,-n);///砏玥(2)ㄧΑ㊣ㄧΑ
        double half=myPow(x,n/2);
        if(n%2==0)return half*half;///案计*
        else return half * half *x;
    }
};
