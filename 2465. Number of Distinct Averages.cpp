class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        unordered_set<float> s;
        float average;
        int max, min;
        while (!nums.empty())
        {
            max = *max_element(nums.begin(), nums.end());
            min = *min_element(nums.begin(), nums.end());
            average = (float)(min+max)/2;
            s.insert(average);
            nums.erase(min_element(nums.begin(), nums.end()));
            nums.erase(max_element(nums.begin(), nums.end()));
        }
        return s.size();
    }
};
