class Solution {
public:
    int pivotInteger(int n) 
    {
        int res = -1;
        int leftSum = 0, rightSum = 0;
        for (int i = 1; i <= n; i++)
            rightSum += i;
        
        for (int i = 1; i <= n; i++)
        {
            rightSum -= i;
            if (rightSum == leftSum)
                res = i;
            leftSum += i;
        }
        return res;
    }
};
