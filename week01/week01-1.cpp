//LeetCode 28.Find the Index of the First Occurrence in a String
//�bhaystack���_��襤��� needle �w (�j�����w)

class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();//�r�ꪺ����
        for(int i=0; i<=H-N ;i++){
            if(haystack.substr(i,N)==needle)return i;
        }
        return -1;//�j��̭��䤣��w
    }

};
