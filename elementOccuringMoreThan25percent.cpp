class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        int max_size = n/4;
        int ans = 0;
        for(auto &it:arr){
            mp[it]++;

            if(mp[it]>max_size){
                ans = it;
            }
        }
        return ans;

    }
};