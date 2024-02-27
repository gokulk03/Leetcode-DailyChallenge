#include<bits/stdc++.h>
#define ll long long 
#define N 1000000
using namespace std;
void sieve(vector<int>& primes,int start,int end){
    
    primes[1]=primes[0]=0;
    
    for(ll i=2;i<=end;i++){
        if(primes[i]){
            for(ll j=i*i;j<=end;j+=i){
                primes[j]=0;
            }
        }
    }
    
}
int main(){
    vector<int> ans;
    vector<int> primes(N,1);
    int start,end;
    cin>>start>>end;
    sieve(primes,start,end);
    for(int i=start;i<=end;i++){
        if(primes[i]==1){
            ans.push_back(i);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}