class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int maxi=-1;
        for(auto x:m){
            if(x.first==x.second){
                maxi=max(maxi,x.first);
            }
        }
        return maxi;
    }
};