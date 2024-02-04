class Solution {
public:
    int f(int ind, vector<int>& arr, int k,vector<int>& dp){
        int n = arr.size();
        if(ind==n){
            return 0;
        }
        int len = 0;
        int maxi_element = INT_MIN;
        int maxi_sum = INT_MIN;
        if(dp[ind]!=-1){
            return dp[ind];
        }
        for(int j=ind;j<min(ind+k,n);j++){
            len++;
            maxi_element = max(maxi_element,arr[j]);
            int sum = len*maxi_element+f(j+1,arr,k,dp);
            maxi_sum = max(maxi_sum,sum);
        }
        return dp[ind]=maxi_sum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> dp(n,-1);
        return f(0,arr,k,dp);
    }
};