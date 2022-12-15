class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        priority_queue<int> pq;

        for (auto &item: nums) 
          pq.push(item);

        int first = pq.top(); 
        pq.pop();

        int second = pq.top();
        pq.pop();

        return (first-1)*(second-1);     
    }
};

class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        return (nums[n-1]-1)* (nums[n-2]-1);  
    }
};
