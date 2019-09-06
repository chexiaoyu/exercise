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
    void Mirror(TreeNode *pRoot)
    {
        if (!pRoot)
        {
            return;
        }
        struct TreeNode *tmp;
        tmp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = tmp;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
