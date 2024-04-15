class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int j=n-1;
        
        while(s[j]==' '){
            j-=1;
            
        }
        int count =0;
        for(int i=0;i<=j;i++){
            if(s[i]==' '){
                count=0;
            }else{
                count+=1;
            }
        }
        return count;
    }
};