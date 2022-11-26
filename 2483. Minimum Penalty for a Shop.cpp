class Solution {
public:
    int bestClosingTime(string customers) 
    { 
        customers += 'N';
        int n = customers.length();
        int penalty, minpenalty = INT_MAX, mintime = INT_MAX;
        int y_after = 0, n_before = 0;
        
        for (char c: customers)
            if (c == 'Y')
                y_after++;
                
        for (int i = 0; i < n; i++)
        {
            penalty = y_after+n_before;
            if (penalty < minpenalty)
            {
                mintime = i;
                minpenalty = penalty;
            }
            if (customers[i] == 'Y')
                y_after--;
            else if (customers[i] == 'N')
                n_before++;
        }
        return mintime;
    }
};
