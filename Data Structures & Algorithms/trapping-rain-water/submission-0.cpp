class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lefty(n);
        vector<int>righty(n);
        lefty[0]=height[0];
        for(int i=1;i<n;i++){
            lefty[i]=max(lefty[i-1],height[i]);
        }
        righty[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            righty[i]=max(righty[i+1],height[i]);
        }
        int tot=0;
        for(int i=0;i<n;i++){
            if(height[i]<lefty[i] && height[i]<righty[i]){
                tot += min(lefty[i],righty[i])-height[i];
            }
        }
        return tot;
    }
};
