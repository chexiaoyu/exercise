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
    int max_tmp(vector<int> input)
    {
        if (input.size() == 0)
            return -1;
        int max = input[0];
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] >= max)
                max = input[i];
        }
        return max;
    }
    vector<int> FindMaxMin(int n, vector<int> input)
    {
        vector<int> result;
        for (int i = 0; i < n; i++) // 子序列长度 - 1
        {
            int min = 10e9;
            for (int j = 0; j < n - i; j++) // 子序列起始坐标
            {
                vector<int> tmp;
                for (int k = j; k < j + i + 1; k++) // 子序列生成
                {
                    tmp.push_back(input[k]);
                }
                int max_value = max_tmp(tmp);
                if (min > max_value)
                    min = max_value;
            }
            result.push_back(min);
        }
        printf("%d\n", result[2]);
        return result;
    }
};

int main()
{
    // int n;
    // vector<int> input;
    // int tmp;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> tmp;
    //     input.push_back(tmp);
    // }
    Solution solution;
    int n = 6;
    vector<int> input = {1, 3, 2, 4, 6, 5};
    vector<int> result = solution.FindMaxMin(n, input);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", result[i]);
    }
    printf("%d", result[n - 1]);
    return 0;
}
