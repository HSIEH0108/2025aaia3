///week12-2.cpp 學習計畫 Math第四題
///LeetCode 976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end()); ///先有效率的排序

        ///for(int i=nums.size()-1;i>=0;i--){
        ///    cout << nums[i] << " ";
        ///}
        for(int i=nums.size()-1;i>=2;i--){
            ///取出 nums[i] vs nums[i-1] nums[i-2]
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];
            }
        }
        return 0;///找不到答案，把大到小印出來
    }
};
