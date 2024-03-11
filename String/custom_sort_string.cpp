class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(auto& el:s){
            mp[el]++;
        }
    string ans = "";
        for(auto& el:order){
            while(mp[el]-- >0){
                ans.push_back(el);
            }
        }

        for(auto& [el,freq]:mp){
            while(freq-- >0){
                ans.push_back(el);
            }
        }
        return ans;
    }
};