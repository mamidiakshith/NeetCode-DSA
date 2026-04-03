class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string k="";
        int n=strs.size();
        for(int i=0;i<strs[0].size();i++){
            if(strs[0][i]==strs[n-1][i]){
                k+=strs[0][i];
            }
            else{
                break;
            }
        }
        return k;
    }
};