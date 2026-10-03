class Solution {
public:
    int findComplement(int num) {
        if(num == 0)
        {
            return 0;
        }
        int ans= 0, rem, mul = 1;
        while(num)
        {
            rem = num % 2;
            rem = rem ^ 1;
            ans = ans + rem * mul;
            
            num = num / 2;

            if(num > 0) 
            {
                 mul = mul * 2; 
            }
        }
        return ans;
    }
};