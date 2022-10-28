class Solution {
public:
    int mySqrt(int x) {
        
        int left = 0;
        int right = x;
        
// x is ok since our result will be less than x
        
// multiplication operator property:
        
// overflow happens even if max x is 2^31 - 1 because middle * middle returns integer
       
// middle should be long long
        
        long long middle;
    
        while (left <= right)
        {
            middle = (left+right)/2;
            
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
