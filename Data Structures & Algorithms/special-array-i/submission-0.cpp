class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==0)return true;
        int me=0,mo=0,oc=0,ec=0;
        for(int i=1;i<nums.size();i++){
            if((nums[i]%2)==(nums[i-1]%2))return false;
        }
        return true;
    }
};