class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int ans=1;
        int count=0;
        char temp=s[0];
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(curr==temp){
                count+=1;
            }
            else{
                temp=curr;
                count=1;
            }
            ans=max(ans,count);
        }
        return ans;
        
    }
};