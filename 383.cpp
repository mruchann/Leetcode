class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        if (ransomNote.size() > magazine.size()) return false;
        
        unordered_map<char, int> umap;
        
        // Mapping from characters to the number of occurences of these characters in magazine.
        
        for (auto &item: magazine) umap[item]++;
        
        for (auto &item: ransomNote) umap[item]--;

        for (auto &item: umap) 
            if (item.second < 0) // item.second -> value
                return false;
        
        return true;
    }
};
