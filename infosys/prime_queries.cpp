#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define N 1000000
void prime_sieve(vector<int>& primes,int start,int end){
    for(ll i=3;i<=end;i+=2){
        primes[i]=1;
        for(ll j=i*i;j<=end;j+=i){
            primes[j]=0;
        }
    }
}
int main(){
    int count = 0;
    int start,end;
    cin>>start>>end;
    vector<int> primes(N+1,0);
    prime_sieve(primes,start,end);
    for(int i=start;i<=end;i++){
        if(primes[i]==1){
            count++;
        }
    }  
    cout<<count;  
}