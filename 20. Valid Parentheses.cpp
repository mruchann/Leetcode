// I'll write 3 member functions for clarity.

class Solution {
public:
    
    bool isOpen(char c) 
    {
        return (c == '[' || c == '{'|| c == '(');
    }
    bool isClose(char c)
    {
        return (c == ']' || c == '}'|| c == ')');
    }
    bool isPair(char open, char close)
    {
        return (open == '{' && close == '}'|| 
            open == '(' && close == ')' || 
            open == '[' && close == ']');
    }
    bool isValid(string s) 
    {
        stack<char> stck;
        
        for (char c : s)
        {
            if (isOpen(c))
                stck.push(c);  
            else
            {
                if (stck.empty()) // ]{{}[()] is wrong
                    return false;
                else if (!isPair(stck.top(), c)) // (} is wrong
                    return false;
                else // if they match, pop the open one.
                    stck.pop();
            }
        }
        return stck.empty(); // return false if still there is unmatched (, {, [
    }    
};
