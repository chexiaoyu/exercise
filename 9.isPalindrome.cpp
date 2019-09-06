#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long int new_num = 0;
        int n = x;
        while (x > 0)
        {
            new_num = new_num * 10 + x % 10;
            x /= 10;
        }
        if (n == new_num)
            return true;
        else

            return false;
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
