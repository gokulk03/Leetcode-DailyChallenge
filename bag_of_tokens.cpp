class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int score = 0;
        int maxscore = 0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i++];
                
                maxscore = max(maxscore,++score);
            
            }else if(score>0 && i!=j){
                power+=tokens[j--];
                score--;
            
            }else{
                break;
            }
        }
        return score;
    }
};