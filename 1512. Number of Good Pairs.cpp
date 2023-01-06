class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        std::unordered_map<int, int> m;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.count(nums[i]))
                count += (m[nums[i]]++);
            else
                m[nums[i]]++;        
        }
        return count;
    }
};
