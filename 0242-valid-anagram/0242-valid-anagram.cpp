class Solution {
public:
    bool isAnagram(string s, string t) {
        int sSize=s.size()-1;
        int tSize=t.size()-1;
        if(sSize!=tSize) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
    }
};