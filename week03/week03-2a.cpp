///week03-2a
///Leetcode�ǲ߭p�e��8�D 1822. Sign of the Product of an Array
///��}�C���_�ӡA�ݬO�����٬O�t�ƩάO0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size();i++)
            ans*=nums[i];
    }
    if(ans>0)return 1;
    if(ans<0)return -1;
    return 0;
    }
};
