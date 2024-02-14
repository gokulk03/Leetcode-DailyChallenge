class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive_nums;
        vector<int> negative_nums;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positive_nums.push_back(nums[i]);
            }else{
                negative_nums.push_back(nums[i]);
            }
        }
        int x = 0;
        int z = 0;
        int i=0;
        while(x<positive_nums.size() && z<negative_nums.size()){
            nums[i]=positive_nums[x];
            x++;
            i++;
            nums[i]=negative_nums[z];
            z++;
            i++;
            
        }
        return nums;
    }
};