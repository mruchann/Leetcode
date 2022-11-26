class Solution {
public:
    int numberOfCuts(int n) 
    {
        if (n == 1) // no need to cut
            return 0;
        else if (n % 2 == 0) // even
            return n/2;
        else // odd
            return n;
    }
};
