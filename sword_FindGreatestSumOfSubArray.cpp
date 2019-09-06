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
    int FindGreatestSumOfSubArray(vector<int> array)
    {
        // int max = INT_MIN;
        // for (int i = 1; i <= array.size(); i++)
        // {
        //     for (int k = 0; k < array.size() - i + 1; k++)
        //     {
        //         int sum = 0;
        //         for (int j = 0; j < i; j++)
        //         {
        //             sum += array[k + j];
        //         }
        //         if (sum >= max)
        //         {
        //             max = sum;
        //         }
        //     }
        // }
        // return max;

        //  动态规划
        if (array.empty())
            return 0;
        int sum = array[0], tempsum = array[0]; //注意初始值 不能设为0 防止只有负数
        for (int i = 1; i < array.size(); i++)  //从1开始 因为0的情况在初始化时完成了
        {
            tempsum = (tempsum < 0) ? array[i] : tempsum + array[i];
            sum = (tempsum > sum) ? tempsum : sum;
        }
        return sum;
    }
};
int main()
{
    Solution solution;
    vector<int> array = {2, 8, 1, 5, 9};
    int max = solution.FindGreatestSumOfSubArray(array);
    printf("%d\n", max);
    system("pause");
    return 0;
}
