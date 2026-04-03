class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r=0,l=0,mc=0,oc=0,s=0;
        while(r<nums.size()){
            if(nums[r]==1){
                oc+=1;
            }
            else{
                oc=0;
            }
            mc=max(mc,oc);
            r++;
        }
        return mc;
    }
};