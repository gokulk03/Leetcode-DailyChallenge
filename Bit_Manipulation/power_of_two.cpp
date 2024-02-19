#include<bits/stdc++.h>
using namespace std;
bool ispoweroftwo(int n){
    if(n==0){
        return false;
    }
    while(n%2==0){
        n/=2;
    }
    if(n==1){
        return true; 
    }return false;
}
int main(){
    int n;
    cin>>n;
    cout<<ispoweroftwo(n);
    
}
// time Complexity: O(log base 2 n)
// space complexity : O(1)