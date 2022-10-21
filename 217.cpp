class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> umap;
        
        for (int i = 0; i < nums.size(); i++)
            if (++umap[nums[i]] == 2) return true;
        
        return false;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);   
        }
        return false;
    }
};


