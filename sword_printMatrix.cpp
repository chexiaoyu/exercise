#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> printMatrix(vector<vector<int>> matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> res;
        int left = 0, right = col - 1, top = 0, btm = row - 1;
        int count;
        count = ((row < col ? row : col) - 1) / 2 + 1;
        for (int i = 0; i < count; i++)
        {
            //�������Ҵ�ӡ
            for (int j = i; j < col - i; j++)
                res.push_back(matrix[i][j]);
            //�������µ�ÿһ������
            for (int k = i + 1; k < row - i; k++)
                res.push_back(matrix[k][col - 1 - i]);
            //�ж��Ƿ���ظ���ӡ(���������ÿ������)
            for (int m = col - i - 2; (m >= i) && (row - i - 1 != i); m--)
                res.push_back(matrix[row - i - 1][m]);
            //�ж��Ƿ���ظ���ӡ(�������ϵ�ÿһ������)
            for (int n = row - i - 2; (n > i) && (col - i - 1 != i); n--)
                res.push_back(matrix[n][i]);
        }
        return res;
    }
};
int main()
{
    Solution solution;
    vector<vector<int>> matrix = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    // vector<vector<int>> matrix = {{1}};
    vector<int> result = solution.printMatrix(matrix);
    // printf();
    return 0;
}
