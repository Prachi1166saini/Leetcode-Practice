class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag=true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        else
            for(int i=0;i<n;i++){
                if(s[i]!=t[i]){
                    flag=false;
                    break;
                    
                }
                else 
                    flag=true;
                
            }
        if(flag==true) return true;
        else return false;
        }
        
};