class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;
        for(auto &it : paths){
            string source = it[0];
            mp[source]=1;
        }
        string ans;
        for(auto &it:paths){
            string dest = it[1];
            if(mp[dest]!=1){
                ans = dest;
                return ans;
            }
        }
        return "";
    }
};

// 2nd approach would be to use unordered_set where we use find() and end() 
// in order to return the destination city

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> mp;
        for(auto &it : paths){
            string source = it[0];
            mp.insert(source);
        }
        string ans;
        for(auto &it:paths){
            string dest = it[1];
            if(mp.find(dest)==mp.end()){
                ans = dest;
                return ans;
            }
        }
        return "";
    }
};



