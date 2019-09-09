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
    int Sum_Solution(int n)
    {
        int ans = n;
        ans && (ans += Sum_Solution(n - 1));
        return ans;
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
