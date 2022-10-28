class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string word1Combined;
        for (string s: word1)
            word1Combined += s;
        
        string word2Combined;
        for (string s: word2)
            word2Combined += s;
        
        return word1Combined == word2Combined;
    }
};
