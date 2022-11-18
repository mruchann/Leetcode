class Solution {
public:
    bool isUgly(int n) 
    {
        if (n == 0)
            return false;
        
        vector<int> primes = {2,3,5};
        
        for (int p: primes)
            while (n % p == 0)
                n /= p;
        
        return n == 1;
    }
};

class Solution {
public:
    bool isUgly(int n) 
    {
        if (n == 0)
            return false;
        
        while (n % 2 == 0)
            n /= 2;
        while (n % 3 == 0)
            n /= 3;
        while (n % 5 == 0)  
            n /= 5;
        
        return n == 1;
    }
};
