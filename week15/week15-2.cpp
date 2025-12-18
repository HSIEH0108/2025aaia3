///week15-2.cpp
///LeetCode 學習計畫 459. Repeated Substring Pattern
///ex.abab 變成 abab+abab兩倍
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;///變兩倍字串
        string s3 = s2.substr(1,s2.length()-2);///去掉頭尾
        return s3.find(s) != string::npos; ///在S3裡面找s字串
    }
};
