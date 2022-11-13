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
        stack<char> open;
        
        for (char c : s)
        {
            if (isOpen(c))
                open.push(c);  
            else
            {
                if (open.empty()) // ]{{}[()] is wrong
                    return false;
                else if (!isPair(open.top(), c)) // (} is wrong
                    return false;
                else // if they match, pop the open one.
                    open.pop();
            }
        }
        return open.empty(); // return false if still there is unmatched (, {, [
    }    
};
