#include<bits/stdc++.h>
using namespace std;
int findmissingno(vector<int>& nums){
    int ans=0,total_sum=0,sum=0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    for(int i=0;i<=n;i++){
        total_sum+=i;
    }
    ans=total_sum-sum;
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<findmissingno(nums);
}