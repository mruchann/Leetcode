class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        /*
        
         Logic Explanation:
        
        // By De Morgan's Law, these two are equivalent. I think the former is more intuitive, but the latter looks more simple.
         
        if (event1end < event2beginning || event2end < event1beginning)
            return false;
            
        if (event1end >= event2beginning && event2end >= event1beginning)
            return true
            
        */
        
        return event1[1] >= event2[0] && event2[1] >= event1[0];
    }
};
