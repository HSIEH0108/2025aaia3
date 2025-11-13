///week10-1b.cpp 糶2Ω材1Ωノfor癹伴2Ωノ计厩
///1523. Count Odd Numbers in an Interval Range
///眖low ... high 柑Τ碭od计
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;///ノ计厩计
        if(high%2==1 || low%2==1) ans++;///计
        return ans;
    }
};
