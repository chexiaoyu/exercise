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
// ÖÐÐò±éÀú
class Solution
{
public:
    TreeNode *Convert(TreeNode *pRootOfTree)
    {
        if (!pRootOfTree)
        {
            return NULL;
        }
        TreeNode *pre;
        convertHelper(pRootOfTree, pre);
        TreeNode *res = pRootOfTree;
        while (res->left)
        {
            res = res->left;
        }
        return res;
    }
    void convertHelper(TreeNode *cur, TreeNode *&pre)
    {
        if (!cur)
        {
            return;
        }
        convertHelper(cur->left, pre);
        cur->left = pre; 
        if (pre)
        {
            pre->right = cur;
        }
        pre = cur;
        convertHelper(cur->right, pre);
    }
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
