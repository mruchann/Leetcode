class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int i = 1; i <= n; i++)
        {
            bool divisible_by_3 = (i % 3 == 0);
            bool divisible_by_5 = (i % 5 == 0);
            
            string temp = "";
            
            if (divisible_by_3)
                temp += "Fizz";
            if (divisible_by_5)
                temp += "Buzz";
            if (temp == "")
                temp += to_string(i);
            result.push_back(temp);
        }
        return result;
    }
};
