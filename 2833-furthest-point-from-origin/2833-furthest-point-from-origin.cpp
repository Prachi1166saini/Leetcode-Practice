class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int diff=0;
        int space=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='_'){
                space++;
            }
            else
                if(moves[i]=='L'){
                    diff+=1;
                }
                else
                    diff+=-1;
            
        }
        return abs(diff)+space;
        
    }
};