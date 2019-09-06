#include <stdio.h>
#include <windows.h>

using namespace std;
class Solution
{
public:
    int NumberOf1(int n)
    {
        int count = 0;
        while (n)
        {
            n = n & n - 1;
            count++;
        }
        return count;
    }
};

int main()
{
    Solution solution;
    int n = 5;
    int count = solution.NumberOf1(n);
    printf("%d", count);
    return 0;
}
