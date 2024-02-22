class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mp;
        if(n==1){
            return 1;
        }
        int potential_judge,candidate;
        for(auto& it:trust){
            potential_judge = it[0];
            candidate = it[1];
            mp[candidate]++;
        }
        int ans=-1;
        for(auto& [key,value]:mp){
            if(value==n-1){
                ans=key;

                bool trustsnobody = true;
                for(auto it:trust){
                    if(it[0]==ans){
                        trustsnobody = false;
                        break;
                    }
                }
                if(!trustsnobody){
                    ans=-1;
                }
            }
        }
        return ans;
    }
};