class Solution {
public:
    string removeDuplicates(string s) 
    {
        int n = s.length();
        
        stack<char> stack;
        
        string result;
        
        for (int i = 0; i < n; i++)
        {
            if (stack.empty())
                stack.push(s[i]);
            else if (s[i] == stack.top())
            {
                stack.pop();
                continue;
            }
            else
                stack.push(s[i]);        
        }
        
        while(!stack.empty())
        {
            result += stack.top();
            stack.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
