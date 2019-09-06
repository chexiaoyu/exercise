#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
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
    vector<vector<int>> FindPath(TreeNode *root, int expectNumber)
    {
        if (root == NULL)
        {
            return result;
        }
        path.push_back(root->val);
        if (expectNumber - root->val == 0 && root->left == NULL && root->right == NULL)
        {
            result.push_back(path);
        }
        FindPath(root->left, expectNumber - root->val);
        FindPath(root->right, expectNumber - root->val);
        if (path.size() != 0)
        {
            path.pop_back();
        }
        return result;
    }

private:
    vector<int> path;
    vector<vector<int> > result;
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
