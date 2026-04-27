class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>ans={nums[i],nums[j],nums[k]};
                    res.push_back(ans);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) j++;

                    // Skip duplicates for k
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(sum<0){
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
