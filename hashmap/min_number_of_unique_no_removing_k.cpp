class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int> ans;
        for(auto [key,value]:mp){
            ans.push_back(value);
        }
        int sum = 0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
            if(sum>k){
                return ans.size()-i;
            }
        }
        return 0;

    }
};