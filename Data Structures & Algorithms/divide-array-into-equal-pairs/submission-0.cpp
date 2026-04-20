class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        if(nums.size()%2==1)return false;
        for(auto x:m){
            if((x.second)%2==1)return false;
        }
        return true;
    }
};