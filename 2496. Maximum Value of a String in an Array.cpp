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
                result = stoi(s);
            final_result = max(final_result, result);
        }
        return final_result;
    }
};
