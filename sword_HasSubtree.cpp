#include <stdio.h>
#include <Windows.h>
#include <iostream>

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
    bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2)
    {
        if (!pRoot1 || !pRoot2)
        {
            return false;
        }
        bool result = false;
        if (pRoot1->val == pRoot2->val)
        {
            result = isSubtree(pRoot1, pRoot2);
        }
        if (!result)
        {
            result = HasSubtree(pRoot1->left, pRoot2);
        }
        if (!result)
        {
            result = HasSubtree(pRoot1->right, pRoot2);
        }
        return result;
    }

    bool isSubtree(TreeNode *pRoot1, TreeNode *pRoot2)
    {
        if (!pRoot2)
        {
            return true; // 遍历完成
        }
        if (!pRoot1)
        {
            return false; // 主树异常
        }
        bool result = true;
        if (pRoot1->val != pRoot2->val)
        {
            result = false;
        }
        if (result)
        {
            result = isSubtree(pRoot1->left, pRoot2->left);
        }
        if (result)
        {
            result = isSubtree(pRoot1->right, pRoot2->right);
        }
        return result;
    }
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
