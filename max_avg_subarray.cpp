class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double windowsum = 0,windowavg,maxavg;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];
        }
        windowavg = windowsum / k;
        maxavg = windowavg;

        for(int i=0;i<n-k;i++){
            windowsum = windowsum - nums[i] + nums[i+k];
            windowavg = windowsum/k;
            maxavg = max(maxavg, windowavg);
        }

        return maxavg;
    }
};