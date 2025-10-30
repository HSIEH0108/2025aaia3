///week08-2.cpp LeetCode 學習計畫 matrix矩陣第4題
///73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///第一階段，先讀完，記下全部的零對應的i和j
        int M = matrix.size(),N = matrix[0].size();
        vector<int> markI(M,0),markJ(N,0);
        for (int i=0;i< M;i++){
            for(int j=0;j<N ;j++){
                if(matrix[i][j]==0){
                    markI[i] = 1;///標記I的整條，等一下要清除為0
                    markJ[j] = 1;///標記j的整條，等一下要清除為0

                }
            }
        }
        ///第二階段，再造著mark I和J標記，清除為0
        for (int i=0;i< M;i++){
            for(int j=0;j<N ;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }
        }
    }
};
