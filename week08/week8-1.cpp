///week08-1.cpp LeetCode 學習計畫 matrix矩陣第1題
///1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0;i<accounts.size();i++){
            int now = 0;///迴圈前面now=0
            for(int j=0;j<accounts[0].size();j++){///右手j
                now += accounts[i][j];///把錢加起來
            }///迴圈裡更新now 陣列左手i右手j
            ///迴圈後面 now 拿來用
            ans = max(ans,now);//最有錢的人，更新答案
        }
        return ans;
    }
};
