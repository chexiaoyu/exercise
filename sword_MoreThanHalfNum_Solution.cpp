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
    int MoreThanHalfNum_Solution(vector<int> numbers)
    {
        int count = 0;
        int length = numbers.size();
        if (length == 0)
        {
            return 0;
        }
        int tmp = numbers[0];
        for (int i = 0; i < length; i++)
        {
            if (numbers[i] == tmp)
            {
                count++;
            }
            else
            {
                count--;
            }
            if (count == 0)
            {
                tmp = numbers[i];
                count = 1;
            }
        }
        count = 0;
        for (int i = 0; i < length; i++)
        {
            if (numbers[i] == tmp)
            {
                count++;
            }
        }
        if (count > length / 2)
        {
            return tmp;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Solution solution;
    vector<int> numbers = {1, 2, 2, 2, 2, 3, 4};
    int result = solution.MoreThanHalfNum_Solution(numbers);
    printf("%d\n", result);
    system("pause");
    return 0;
}
