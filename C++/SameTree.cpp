#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int curN;
        int carry = 1;
        int cur;
        
        for(cur = digits.size() - 1; 
           cur >= 0;
           --cur)
        {
            curN = digits[cur] + carry;
            carry = 0;
            
            digits[cur] = curN % 10;
            
            if(curN < 10)
            {
                break;
            } else 
            {
                carry = 1;
            }
        }
        
        if (1 == carry)
        {
            digits[0] = 1;
            digits.push_back(0);
        }
        
        return digits;
    }
};