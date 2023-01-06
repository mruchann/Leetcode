class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        std::sort(costs.begin(), costs.end());
        int bars = 0;
        for (int i = 0; i < costs.size(); i++)
        {
            if (coins >= costs[i])
            {
                coins -= costs[i];
                bars++;
            }
        }
        return bars;
    }
};
