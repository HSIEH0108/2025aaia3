//LeetCode 28.Find the Index of the First Occurrence in a String
//在haystack乾稻草堆中找到 needle 針 (大海撈針)

class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//字串的長度
        for(int i=0; i<=H-N ;i++){
            if(haystack.substr(i,N)==needle)return i;
        }
        return -1;//迴圈裡面找不到針
    }

};
