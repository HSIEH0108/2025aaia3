///week04-3.cpp
///LeetCode �ǲ߭p�e��7�D66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        for(int i=N-1; i>=0; i--){
            if(digits[i]==9){
                digits[i]=0;
            }else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
