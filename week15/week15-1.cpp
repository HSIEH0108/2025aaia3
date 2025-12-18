///week15-1.cpp
///LeetCode 242. Valid Anagram 請問兩字串是否相同
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        int H[256] = {};
        ///先針對s字串，逐一放入H 陣列
        for(char c : s){///c++的進階迴圈
            H[c]++;///把字母對應的格子++
        }
        ///再針對t字串，逐一拿出H陣列
        for(char c : t){///c++的進階迴圈
            H[c]--;
            if(H[c]<0)return false;
        }
        return true;
    }
};
