class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        unordered_set<float> s;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = n - 1;
        
// nums.length() is even number, i < j is fine
// we don't need to divide the sum by 2.0
// distinct sum means distinct average
// we only need how many different sums we have        
        
        while(i < j)
            s.insert(nums[i++] + nums[j--]);
        
        return s.size();
    }
};

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
