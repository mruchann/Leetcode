class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> umap;
        if (s.size() != t.size()) return false; // short circuit
        // size = s.size() = t.size()
        
        for (int i = 0; i < s.size(); i++)
        {
            umap[s[i]]++; // addition
            umap[t[i]]--; // consumption
        }

        for (auto& item: umap)
            if (item.second) // values except zero evaluate to true
                return false;
        
        return true;
    }
    
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false; // short circuit
        
        vector<int> alphabet(26);
        
        for (int i = 0; i < s.size(); i++)
            alphabet[s[i] - 'a']++; // addition
        
        for (int i = 0; i < t.size(); i++)
            alphabet[t[i] - 'a']--; // consumption
        
        for (int i = 0; i < 26; i++)
            if (alphabet[i])
                return false;
        
        return true;
    }    
};
