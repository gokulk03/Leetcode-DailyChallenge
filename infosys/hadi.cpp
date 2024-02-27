#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max_people = 0;
    int sum = 0;
    for(int i=1;i<=n;i++){
        
        if(sum+i<=n){
            sum+=i;
            max_people++;
        }else{
            break;
        }
    }
    cout<<max_people;
}