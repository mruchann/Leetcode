class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        
        while (num > 0)
        {
            if (num&1) num -= 1; // bitwise AND. evaluates to true if right first bit slot is 1; in other words, if number is odd.
            else num >>= 1; // one bit shifting. same as num /= 2
            step++;    
        }
        return step;
    }
};
