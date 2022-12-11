class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) 
    {
        int res = 0;
        int row = grid.size(), column = grid[0].size();

        for (int i = 0; i < row; i++)
            sort(grid[i].begin(), grid[i].end());

        for (int j = 0; j < column; j++)
        {
            int local_max = INT_MIN;
            for (int i = 0; i < row; i++)
                local_max = max(local_max, grid[i][j]);
            res += local_max;    
        }
        return res;
    }
};
