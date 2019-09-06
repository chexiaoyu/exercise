#include <stdio.h>
#include <Windows.h>
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
    // 可以用位运算实现，如果将所有所有数字相异或，则最后的结果肯定是那两个只出现一次的数字异或
    // 的结果，所以根据异或的结果1所在的最低位，把数字分成两半，每一半里都还有只出现一次的数据和成对出现的数据
    // 这样继续对每一半相异或则可以分别求出两个只出现一次的数字
    // 异或 相同为0 不同为1
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2)
    {
        if (data.size() < 2)
            return;
        int tmp = data[0];
        for (int i = 1; i < data.size(); i++)
        {
            tmp ^= data[i];
        }
        if (tmp == 0)
            return;
        int index = 0;
        while ((tmp & 1) == 0)
        {
            tmp >>= 1;
            ++index;
        }
        *num1 = *num2 = 0;
        for (int i = 0; i < data.size(); i++)
        {
            if (IsBit(data[i], index))
                *num1 ^= data[i];
            else
                *num2 ^= data[i];
        }
    }

    bool IsBit(int num, int index)
    {
        num >>= index;
        return num & 1;
    }
};
int main()
{
    Solution solution;
    vector<int> data = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    int *num1 = &data[0];
    int *num2 = &data[0];
    solution.FindNumsAppearOnce(data, num1, num2);
    printf("%d %d", *num1, *num2);
    system("pause");
    return 0;
}
