class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int lBar=height[0];
        int rBar=height[n-1];
        long long ans=0;
        while(l<=r){
            if(lBar<rBar){
            if(height[l]>lBar)
                lBar=height[l];
            else{
                ans+=lBar-height[l];
                l++;
            }
            }
            else{
                if(height[r]>rBar)
                rBar=height[r];
            else{
                ans+=rBar-height[r];
                r--;
                
            }
            }
        }
            return ans;
    }
};