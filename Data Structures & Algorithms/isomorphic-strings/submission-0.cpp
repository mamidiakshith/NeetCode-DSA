class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size()!=t.size()){
        return false;
        }
        map<char,int>m1,m2;
        for(char ch:s){
            m1[ch]++;
        }
        for(char ch:t){
            m2[ch]++;
        }
        vector<int> freq1, freq2;

for (auto &p : m1) freq1.push_back(p.second);
for (auto &p : m2) freq2.push_back(p.second);

sort(freq1.begin(), freq1.end());
sort(freq2.begin(), freq2.end());

return freq1 == freq2;

    }
};