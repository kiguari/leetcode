#include <string>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string test = std::to_string(x);
        int i = 0;
        int j = test.length();
        j--;
        for(; i <= j; i++, j--)
        {
            if(test[i] != test[j])
                return(false);
        }
        return(true);
    }
    Solution(){}
    ~Solution(){}
};

int main()
{
    Solution a;
    a.isPalindrome(1111);
}