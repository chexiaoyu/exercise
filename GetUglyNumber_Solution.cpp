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
    int GetUglyNumber_Solution(int index)
    {
        // 1-6肯定都是丑数
        if (index < 7)
            return index;
        vector<int> res(index);
        res[0] = 1;
        // 三个指针 分别指向*2 *3 *5得到的最小丑数
        int t2 = 0, t3 = 0, t5 = 0, i;
        for (i = 1; i < index; ++i)
        {
            //选出三个队列头最小的数
            res[i] = min(res[t2] * 2, min(res[t3] * 3, res[t5] * 5));
            if (res[i] == res[t2] * 2)
                t2++;
            if (res[i] == res[t3] * 3)
                t3++;
            if (res[i] == res[t5] * 5)
                t5++;
        }
        return res[index - 1];
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
