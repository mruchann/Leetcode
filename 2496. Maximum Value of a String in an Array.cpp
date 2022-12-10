class Solution {
public:
    int maximumValue(vector<string>& strs) 
    {
        int final_result = -1;
        for (string &s: strs)
        {
            int result = -1;
            for (char &c: s)
            {
                if (!isdigit(c))
                {
                    result = s.length();
                    break;
                }
            }
            if (result == -1) 
            {
                result++;
                int k = pow(10, s.length()-1);
                for (char &c: s)
                {
                    result += k * (c - '0');  
                    k /= 10;
                }
            }
            final_result = max(final_result, result);
        }
        return final_result;
    }
};
