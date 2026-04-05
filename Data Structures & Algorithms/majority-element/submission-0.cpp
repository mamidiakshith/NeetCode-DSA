class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int l=nums.size();
        for(int n:nums){
            m[n]++;
        }
        for(auto x:m){
            if(x.second> l/2){
                return x.first;
            }
        }
        return -1;
    }
};