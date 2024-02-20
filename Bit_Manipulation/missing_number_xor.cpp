#include<bits/stdc++.h>
using namespace std;
int missingno(vector<int>& nums){
    int result = nums.size();
    
    for(int i=0;i<nums.size();i++){
        result^=nums[i]^i;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<missingno(nums);

}