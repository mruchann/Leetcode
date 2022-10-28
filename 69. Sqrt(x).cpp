class Solution {
public:
    int mySqrt(int x) {
        
        int left = 0;
        int right = x;
        long long middle; // to avoid overflow in integer addition and multiplication: middle*middle, (left + right)/2
        
// #Binary Search Approach
        
        while (left <= right)
        {
            middle = (left + right)/2; // we should calculate middle in the every step
            
            if (x == middle*middle) 
                return middle;
                
            else if (x < middle*middle)
                right = middle - 1; 
            
            else if (x > middle*middle)
                left = middle + 1;  
        }
            
        return right;
    }
};
