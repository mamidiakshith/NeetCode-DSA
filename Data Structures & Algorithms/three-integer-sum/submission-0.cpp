class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>ans={nums[i],nums[j],nums[k]};
                    res.push_back(ans);
                    j++;
                    k--;
                }
                else if(sum>0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return res;
    }
};
