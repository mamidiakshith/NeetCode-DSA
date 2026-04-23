class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(), [](pair<int,int> &a, pair<int,int> &b){
        return a.second > b.second; // sort by value descending
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
