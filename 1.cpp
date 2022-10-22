class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // First, check the map and then add to the map.
        
        // So, we can tolarate 3+3 = 6 case. Otherwise, our map wouldn't work since 3 will be mapped to 1(index). We would lost 0(index).
        
        unordered_map<int, int> m;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target-nums[i];
            
            if (m.find(complement) != m.end()) // check if the complement exists
            {
                result.push_back(m[complement]); // complement's array index
                result.push_back(i); // array index
                break;
            }
            
            else
                m[nums[i]] = i; // match each array element with the corresponding index.
        }
        return result;
    }
};
