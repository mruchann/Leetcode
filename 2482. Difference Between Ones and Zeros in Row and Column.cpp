class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int column = grid[0].size();
        vector<vector<int>> diff(row, vector<int>(column, 0));
        
        int onesRow = 0, onesCol = 0, zerosRow = 0, zerosCol = 0;

        for (int i = 0; i < row; i++)
        {
            zerosRow = 0;
            onesRow = 0;
            for (int j = 0; j < column; j++)    
            {
                if (grid[i][j] == 1)
                    onesRow++;
                else
                    zerosRow++;
            }
            for (int j = 0; j < column; j++)
                diff[i][j] += onesRow - zerosRow; 
        }
        for (int j = 0; j < column; j++)
        {
            zerosCol = 0;
            onesCol = 0;
            for (int i = 0; i < row; i++)    
            {
                if (grid[i][j] == 1)
                    onesCol++;
                else
                    zerosCol++;
            }
            for (int i = 0; i < row; i++)
                diff[i][j] += onesCol - zerosCol; 
        }
        return diff;
    }
};
