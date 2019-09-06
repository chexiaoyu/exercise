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
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {
    }
};
class Solution
{
public:
    bool IsBalanced_Solution(TreeNode *pRoot)
    {
        return getDepth(pRoot) != -1;
    }

private:
    int getDepth(TreeNode *pRoot)
    {
        if (!pRoot)
            return 0;
        int left = getDepth(pRoot->left);
        if (left == -1)
            return -1;
        int right = getDepth(pRoot->right);
        if (right == -1)
            return -1;
        // 比较每个左右子树的深度
        return abs(left - right) > 1 ? -1 : 1 + max(left, right);
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
