class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        
        // minutes:
        
        int event1beginning = event1[0][0] * 600 + event1[0][1] * 60 + event1[0][3] * 10 + event1[0][4] * 1;
        
        int event2beginning = event2[0][0] * 600 + event2[0][1] * 60 + event2[0][3] * 10 + event2[0][4] * 1;
        
        int event1end = event1[1][0] * 600 + event1[1][1] * 60 + event1[1][3] * 10 + event1[1][4] * 1;
        
        int event2end = event2[1][0] * 600 + event2[1][1] * 60 + event2[1][3] * 10 + event2[1][4] * 1;
        
        if (event1end < event2beginning || event2end < event1beginning)
            return false;
        else
            return true;
    }
};
