class Solution {
public:
    int captureForts(vector<int>& forts) 
    {
        int res = 0;
        int captured = 0;
        bool one = false, minus_one = false; // flags
        for (int i = 0, n = forts.size(); i < n; i++)
        {
            if (forts[i] == 1)
            {
                if (minus_one)
                    res = max(res, captured);
                one = true;
                minus_one = false;
                captured = 0;
            }
            else if (forts[i] == -1)
            {
                if (one)
                    res = max(res, captured);
                minus_one = true;
                one = false;
                captured = 0;
            }
            else if (forts[i] == 0)
                if (one || minus_one)
                    captured++;
        }
        return res;
    }
};
