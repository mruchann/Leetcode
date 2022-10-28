class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int result = 1;
        int l = 0;
        
        for (int r = 1; r < nums.size(); r++)
        {
            if (nums[r-1] >= nums[r]) l = r;
            result = max(result, r-l+1);
        }
        
        return result;
    }
};
