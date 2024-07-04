class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4) return 0;
        sort(nums.begin(),nums.end());
        int mn_val=INT_MAX;
        mn_val=min(mn_val,nums[n-4]-nums[0]);
        mn_val=min(mn_val,nums[n-1]-nums[3]);
        mn_val=min(mn_val,nums[n-2]-nums[2]);
        mn_val=min(mn_val,nums[n-3]-nums[1]);
        return mn_val;
    }
};