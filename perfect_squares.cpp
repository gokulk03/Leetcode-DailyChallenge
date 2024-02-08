class Solution {
public:
    int numSquares(int n) {
        if(n<=0){
            return 0;
        }
        int ans = n;
        for(int i=1;i*i<=n;i++){
            int square = i*i;
            ans= min(ans,1+(numSquares(n-square)));
        }
        return ans;
    }
};