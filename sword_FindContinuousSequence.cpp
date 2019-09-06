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
    vector<vector<int>> FindContinuousSequence(int sum)
    {
        vector<vector<int>> result;
        int n_max = sqrt(sum * 2);
        for (int i = n_max; i >= 2; i--)
        {
            vector<int> list;
            if ((i & 1) == 1 && sum % i == 0 || (sum % i) * 2 == i)
            {
                for (int j = 0, k = (sum / i) - (i - 1) / 2; j < i; j++, k++)
                {
                    list.push_back(k);
                }
                result.push_back(list);
            }
        }
        return result;
    }
};
int main()
{
    Solution solution;
    vector<vector<int>> result = solution.FindContinuousSequence(9);
    // printf();
    system("pause");
    return 0;
}
