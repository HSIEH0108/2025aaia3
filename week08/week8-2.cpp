///week08-2.cpp LeetCode �ǲ߭p�e matrix�x�}��4�D
///73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///�Ĥ@���q�A��Ū���A�O�U�������s������i�Mj
        int M = matrix.size(),N = matrix[0].size();
        vector<int> markI(M,0),markJ(N,0);
        for (int i=0;i< M;i++){
            for(int j=0;j<N ;j++){
                if(matrix[i][j]==0){
                    markI[i] = 1;///�аOI������A���@�U�n�M����0
                    markJ[j] = 1;///�аOj������A���@�U�n�M����0

                }
            }
        }
        ///�ĤG���q�A�A�y��mark I�MJ�аO�A�M����0
        for (int i=0;i< M;i++){
            for(int j=0;j<N ;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j]=0;
            }
        }
    }
};
