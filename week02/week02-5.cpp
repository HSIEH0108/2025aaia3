///week02-5.cpp Leetcode�ǲ߭p�e��2�D
///389. Find the Difference2
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; //�}�C�ŧi ASCII:0~255
        for(int i=0;i<s.length();i++){
            char c= s[i];
            A[c]++;
        }
        for(int i=0;i<t.length();i++){
        char c= t[i];
        A[c]--;
        if(A[c] < 0)return c;
        }
        return 0;
    }
};
