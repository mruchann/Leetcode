class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> umap;
        if (s.size() != t.size()) return false; // short circuit
        for (int i = 0; i < s.size(); i++)
            umap[s[i]]++; // addition
        for (int i = 0; i < t.size(); i++)
            umap[t[i]]--; // consumption
        for (auto& item: umap)
            if (item.second) // values except zero evaluate to true
                return false;
        return true;
    }
    
};
