#include <string>
#include <iostream>

class Solution {
private:
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
                return(0);
            if(flag_minus == 1 && res > 2147483647)
                return(0);
        }
        if(flag_minus == -1)
            res = res * flag_minus;
        return(res);
    }
public:
    int reverse(int x)
    {
        int minus_flag = 0;
        if(x == -2147483648)
            x = 2147483647;
        if(x < 0)
        {
            x *= -1;
            minus_flag = 1;
        }
        std::string x_str = std::to_string(x);
        std::string result;
        int i = x_str.length();
        if(i)
        {
            i--;
            for(; i != 0; i--)
                result += x_str[i];
            result += x_str[i];
        }
        int res = myAtoi(result);
        if(minus_flag)
            res *= -1;
        return(res);
    }
    Solution() {}
    ~Solution() {}
};

int main()
{
    Solution sol;
    std::cout << sol.reverse(120) << std::endl;
    return(0);
}