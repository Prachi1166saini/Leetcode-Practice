class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st="";
        int n=strs[0].size();
        bool temp=false;
        int m=strs.size();
        for(int i=0;i<n;i++){
            char ch=strs[0][i];
            for(int j=0;j<m;j++){
                char common=strs[j][i];
                if(ch!=common){
                    temp=false;
                    break;
                }
                
                else 
                    temp=true;
            }
            if(temp==false){
                break;
            } 
            else{
                st+=strs[0][i];
            }
        }
        return st;
        
    }
};