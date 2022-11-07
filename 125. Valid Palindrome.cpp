class Solution {
public:
    bool isPalindrome(string s) {
        
        int l = 0;
        int r = s.size() - 1;
        int n = s.size();
        
// makes the evaluation case insensitive.        
        for (int i = 0; i < n; i++) 
            s[i] = tolower(s[i]);
        
        while(l < r)
        {
            if (!iswalnum(s[l])) 
            {
                l++;
                continue;
            }
            if (!iswalnum(s[r])) 
            {
                r--;
                continue;
            }
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};
