#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int sum = 0;
    while(temp>0){
        int r = temp%10;
        sum+=(r*r*r);
        temp/=10;
    }
    if(sum==n){
        cout<<"it is a amstrong number";
    }else{
        cout<<"it is not a amstrong number";
    }
}