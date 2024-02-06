class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;
        for(auto s:strs){
            string hashstring = "";
            vector<int> charfreq(26);
            for(auto ch : s){
                charfreq[ch-'a']++;
            }
            for(int i=0;i<26;i++){
                hashstring.push_back(charfreq[i]);
                hashstring.push_back('#');
            }
            mp[hashstring].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto [key,answer]:mp){
            ans.push_back(answer);
        }
        return ans;
    }
};