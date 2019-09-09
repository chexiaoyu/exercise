#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <list>

using namespace std;
class Solution
{
public:
    int LastRemaining_Solution(int n, int m)
    {
        if (n == 0)
            return -1;
        list<int> index;
        for (int i = 0; i < n; i++)
            index.push_back(i);
        list<int>::iterator iter = index.begin();
        while (index.size() > 1)
        {
            for (int i = 0; i < m - 1; i++)
            {
                ++iter;
                if (iter == index.end())
                    iter = index.begin();
            }
            list<int>::iterator next = ++iter;
            if (next == index.end())
            {
                next = index.begin();
            }
            --iter;
            index.erase(iter);
            iter = next;
        }
        int res = *index.begin();
        return res;
    }
};

int main()
{
    Solution solution;
    int res = solution.LastRemaining_Solution(5, 3);
    printf("%d", res);
    system("pause");
    return 0;
}
