class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        
        int result = 0;
        
        int n = nums.size();
        
        for (int l = 0; l < n; l++)
        {
            int current_gcd = nums[l];
            for (int r = l; r < n; r++)
            {
                current_gcd = gcd(current_gcd, nums[r]);
                if (current_gcd == k)
                    result++;
            }
        }
        return result;
    }
};
