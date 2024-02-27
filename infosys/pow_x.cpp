class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;

        if(n>=1){
            for(int i=1;i<=n;i++){
                ans*=x;
            }
        }
        else if(n==0){
            ans=1;
        }
        else{
            n=-(n);
            for(int i=1;i<=n;i++){
                ans*=x;
            }
            ans=1/ans;
        }
        
        return ans;
    }
};