///week06-4.cpp
///Leetcode 學習計畫 simulation模擬第二題657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c : moves){
            if(c=='U'){
                y++;
            }else if(c=='D'){
                y--;
            }else if(c=='L'){
                x--;
            }else if(c=='R'){
                x++;
            }
        }
        if(x==0&&y==0)return true;
        else return false;
    }
};
