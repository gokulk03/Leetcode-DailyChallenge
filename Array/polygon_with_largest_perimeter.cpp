#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = 0;
    sort(nums.begin(),nums.end());
    int prefix_sum = nums[0]+nums[1];
    for(int i=2;i<n;i++){
        if(prefix_sum>nums[i]){
            ans=max(prefix_sum,prefix_sum+nums[i]);
        }
        prefix_sum+=nums[i];
    }
    if(ans==0){
        cout<<-1;
    }else{
        cout<<ans;
    }
}