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
    vector<int> FindLastQ(int n, vector<int> input)
    {
        vector<int> result;
        int sum = 1 + n;
        for (int i = 0; i < n; i++)
        {
            result.push_back(sum - input[i]);
        }
        return result;
    }
};

int main()
{
    int n;
    vector<int> input;
    int tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        input.push_back(tmp);
    }
    Solution solution;
    vector<int> result = solution.FindLastQ(n, input);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    // printf();
    // system("pause");
    return 0;
}
