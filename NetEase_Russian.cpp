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
    int getScore(int n, int m, vector<int> c)
    {
        int score = 0;
        vector<int> result(n);
        vector<int> ones(n, 1);
        for (int i = 0; i < m; i++)
        {
            result[c[i] - 1]++;
            if (count(result.begin(), result.end(), 0) == 0)
            {
                score++;
                for (int j = 0; j < n; j++)
                {
                    result[j] -= 1;
                }
            }
        }
        return score;
    }
};
int main()
{
    int m, n;
    int tmp;
    vector<int> c;
    int score;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        c.push_back(tmp);
    }
    Solution solution;
    score = solution.getScore(n, m, c);
    cout << score << endl;
    system("pause");
    return 0;
}
