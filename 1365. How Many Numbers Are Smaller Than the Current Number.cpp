class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> v(101);
        for (int i = 0; i < nums.size(); i++)
            v[nums[i]]++;
        for (int i = 1; i < v.size(); i++)
            v[i] += v[i-1];
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != 0)
                nums[i] = v[nums[i]-1];
        return nums;    
    }
};

