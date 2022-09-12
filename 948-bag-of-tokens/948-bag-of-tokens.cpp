class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int max_score=0;
        while(i<=j){
            if(power>=tokens[i]){
                score++;
                max_score=max(max_score,score);
                power-=tokens[i];
                i++;
                
            }
            else if(score>0){
                    score--; 
                    power+=tokens[j];
                    j--;                
                }
            else 
                break;
            }
    return max_score;    
    }
    
};