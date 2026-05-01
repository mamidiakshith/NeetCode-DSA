class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        do{
            if(s2.find(s1) != string::npos){
                return true;
            }
            else{
                return false;
            }
        }while(next_permutation(s1.begin(),s1.end()));
    }
};
