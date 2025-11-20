///week11-3.cpp
///LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0; ///3種鈔票
        for(int bill : bills){ ///C++進階for迴圈
            if(bill==5)d5++; ///拿到5
            if(bill==10){ ///客人給10要找5
                if(d5 < 1) return false;///沒得找錢失敗
                d10++; ///找10鈔票
                d5--; ///找5元鈔票
            }
            if(bill==20){
                if(d10>0 && d5>0){ ///可以
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;///找不開，失敗
            }
      }
      return true;///順利賣光
    }
};
