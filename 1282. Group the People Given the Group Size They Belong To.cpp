class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        unordered_map<int, vector<int>> m;
        vector<vector<int>> res;

        for (int i = 0; i < groupSizes.size(); i++)
        {
            m[groupSizes[i]].push_back(i);
            if (m[groupSizes[i]].size() == groupSizes[i])
            {
                res.push_back(m[groupSizes[i]]);
                m.erase(groupSizes[i]);
            }
        }    
        return res;
    }
};
