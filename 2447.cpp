class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        
        int result = 0; // We may not have any subarray.
        
        int n = nums.size();
        
        for (int l = 0; l < n; l++)
        {
            int current_gcd = nums[l]; // Choose a left anchor, mark it as gcd
            for (int r = l; r < n; r++)
            {
                /* 
                We update our current_gcd value in the inner loop. 
                If we somehow reach to k at some point, we'll draw an arrow from our left anchor to the that point. 
                If we found a subarray that has elements with gcd k, increment result.
                We repeat that steps for each left anchor.
                */ 
                current_gcd = gcd(current_gcd, nums[r]); 
                if (current_gcd == k)
                    result++;
            }
        }
        return result;
    }
};
