class Solution {
public:
    void reverseString(vector<char>& s) {
        int end=s.size()-1;
        int st=0;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
        
    }
};