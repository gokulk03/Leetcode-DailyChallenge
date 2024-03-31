class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto& [key,value] : mp){
            if(mp[key]>1){
                ans.push_back(key);
            }
        }
        return ans;
    }
};