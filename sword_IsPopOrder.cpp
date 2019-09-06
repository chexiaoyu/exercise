#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV)
    {
        stack<int> stack1;
        for (int i = 0, j = 0; i < pushV.size(); i++)
        {
            stack1.push(pushV[i]);
            while (j < popV.size() && stack1.top() == popV[j])
            {
                stack1.pop();
                j++;
            }
        }
        return stack1.empty();
    }
};
int main()
{
    Solution solution;
    vector<int> pushV = {1, 2, 3, 4, 5};
    vector<int> popV = {4, 5, 3, 2, 1};
    bool res = solution.IsPopOrder(pushV, popV);
    return 0;
}
