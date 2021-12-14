#include <string>
#include <iostream>

class Solution {
public:
    int myAtoi(std::string s) 
    {
        int i = 0;
        long long  res = 0;
        int flag_minus = 1;
        while(s[i] == ' ')
            i++;
        if(s[i] == '-')
        {
            flag_minus = -1;
            i++;
        }
        if(flag_minus == 1 && s[i] == '+')
            i++;
        
        while(s[i] == '0')
            i++;

        while (s[i] >= '0' && s[i] <= '9' && i < s.length())
        {
            res *= 10;
            res += s[i] - '0';
            i++;
            if(flag_minus == -1 && (-1 * res) < -2147483648)
                return(-2147483648);
            if(flag_minus == 1 && res > 2147483647)
                return(2147483647);

        }
        if(flag_minus == -1)
            res = res * flag_minus;
        return(res);
    }
    Solution() {}
    ~Solution() {}
};

int main()
{
    Solution s;
    std::cout << s.myAtoi("-91283472332") << std::endl;
    return(0);
}