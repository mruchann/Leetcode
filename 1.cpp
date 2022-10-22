class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // First, check the map and then add to the map.
        
        //So, we can tolarate 3+3 = 6 case. Otherwise, our map wouldn't work since 3 will be mapped to 1(index). We would lost 0(index).
        
        vector<int>result;
        
        unordered_map<int, int> umap;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (umap.find(target-nums[i]) != umap.end()) // check if the complement exists
            {
                result.push_back(umap[target-nums[i]]); // complement's array index
                result.push_back(i); // array index
            }
            umap[nums[i]] = i; // match each array element with the corresponding index.
        }
        
        return result;
    }
};
