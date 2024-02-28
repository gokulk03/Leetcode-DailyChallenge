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
// class Solution {
// public:
//     double myPow(double x, int n) {
//         long long newn = n;
//         double ans = 1;
//         if(newn<0){
//             newn = (-1)*newn;
//         }
//         while(newn>0){
//             if(newn%2==0){
//                 x=x*x;
//                 newn/=2;
//             }else{
//                 ans=ans*x;
//                 newn-=1;
//             }
//         }
//         if(n<0){
//             ans=(double)(1)/(double)(ans);
//         }
//         return ans;
//     }
// };