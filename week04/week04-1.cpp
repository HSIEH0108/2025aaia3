///week 04-1.cpp
///Leetcode �D���D 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            numBottles = numBottles - numExchange +1;
            ans++;
            numExchange ++;
    }
    return ans;
    }
};
