///week03-3b.cpp 把不是0的找出來
///LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)nums[k++]=nums[i];
        }
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
