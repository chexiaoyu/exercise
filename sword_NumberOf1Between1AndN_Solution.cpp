#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
class Solution
{
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int number = 0;
        for (int i = 1; i <= n; i++)
        {
            string i_str = to_string(i);
            for (int j = 0; j < i_str.size(); j++)
            {
                if (i_str[j] == '1')
                {
                    number++;
                }
            }
        }
        return number;
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
