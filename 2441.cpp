class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        unordered_map<int, int> m; // value: index
        
        int result = -1;
        
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            if (m.find(-nums[i]) != m.end())
                    result = max(result, abs(nums[i]));  
            m[nums[i]] = i;
        }
        return result;
    }
};

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end()); // load the set
        
        int result = -1;
        
        for (const int item: s)
                if (item > 0 && s.find(-item) != s.end()) // check if complement exists
                    result = max(result, item);
        
        return result;
    }
};
