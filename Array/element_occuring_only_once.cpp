#include<bits/stdc++.h>
using namespace std;
vector<int> SingleNumber(vector<int>& nums,int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    vector<int> ans;
    for(auto& it: mp){
        if(it.second==1){
            ans.push_back(it.first);
        }
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans = SingleNumber(nums,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
}