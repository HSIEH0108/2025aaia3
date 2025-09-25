///week03-2a
///Leetcode學習計畫第8題 1822. Sign of the Product of an Array
///把陣列成起來，看是正數還是負數或是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size();i++)
            ans*=nums[i];
    }
    if(ans>0)return 1;
    if(ans<0)return -1;
    return 0;
    }
};
