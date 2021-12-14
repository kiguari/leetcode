#include <string>
#include <iostream>

class Solution {
public:
    int maxPower(std::string s) {
        int i = 1;
        int j = 0;
        int max = 0;
        if(s.length() == 1)
            return(1);
        j++;
        for(; s[j]; ++j)
        {
            if(s[j-1] == s[j])
                i++;
            if(s[j] != s[j+1])
            {
                if(max <= i)
                    max = i; 
                i = 1;
            }
        }
        return(max);
    }
    Solution(){}
    ~Solution(){}
};

int main()
{
    Solution s;
    std::cout << s.maxPower("bbccdddhjkkkmmnpqqssttuuuwwxxxyyy") << std::endl;
}