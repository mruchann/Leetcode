class Solution {
public:
    int mySqrt(int x) {
        
        int left = 0;
        int right = x;
        int middle;
        
/*
    I could have used long long type for middle, but I want to use int. Here are the nice tricks:
    
    int right = x; is ok since our result will be less than x
        
    multiplication operator property:
        
    overflow happens even if max x is 2^31 - 1 because middle * middle returns integer
*/
        
// #Binary Search Approach
        
        while (left <= right)
        {
            middle = left + (right-left)/2; // to avoid overflow, we don't add numbers. Now, there is no risk for the overflow.
            
            if (x/middle == middle) // if (x == middle * middle) causes overflow for integer type. Look line 16!
                return middle;
                
            else if (x < middle*middle)
                right = middle - 1; 
            
            else if (x > middle*middle)
                left = middle + 1;  
        }
            
        return right;
    }
};
