#include<bits/stdc++.h>
using namespace std;
bool ispoweroftwo(int n){
    if(n==0){
        return false;
    }
    long ans = n;
    if(ans-(ans&-ans)==0){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<ispoweroftwo(n);
}
// time Complexity : O(1)
// space complexity : O(1)