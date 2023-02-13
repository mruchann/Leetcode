class Solution {
public:
    int countOdds(int low, int high) {
        bool lowIsOdd = (low % 2 == 1);
        bool highIsOdd = (high % 2 == 1);
        if (!lowIsOdd && !highIsOdd) {
            return (high-low)/2;
        } else {
            return (high-low)/2 + 1;
        }
    }
};
