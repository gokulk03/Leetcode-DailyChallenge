#include<bits/stdc++.h>
using namespace std;
int rangeBitwiseAnd(int left,int right){
    // find the common prefix until both becomes equal
    // to do that we do right shift by 1
    // after we found that both are equal we right shift by the same
    int shift=0,ans;
    while(left!=right){
        left>>=1;
        right>>=1;
        shift++;
    }
    ans = left<<=shift;
    return ans;
}
int main(){
    int left,right;
    cin>>left>>right;
    cout<<rangeBitwiseAnd(left,right);
}