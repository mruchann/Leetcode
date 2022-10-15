class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> umap;
        
        // Mapping from characters to the number of occurences of these characters in magazine.
        
        for (auto &item: magazine) umap[item]++;
        
        for (auto &item: ransomNote)
            if (!umap[item]--) return false;
        
        return true;
    }
        
        
};
