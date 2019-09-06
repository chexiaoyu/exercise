#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
class Solution
{
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
    {
        vector<int> result;
        if (k > input.size())
        {
            return result;
        }
        quickSort(input, 0, input.size() - 1);
        for (int i = 0; i < k; i++)
        {
            result.push_back(input[i]);
        }
        return result;
    }
    void quickSort(vector<int> &array, int start, int end)
    {
        int i = start;
        int j = end;
        int temp = array[i];
        if (i < j)
        {
            while (i < j)
            {
                while (i < j && array[j] >= temp)
                    j--;
                // if (i < j)
                // {
                //     array[i] = array[j];
                //     i++;
                // }
                swap(array[i], array[j]);
                while (i < j && temp > array[i])
                    i++;
                // if (i < j)
                // {
                //     array[j] = array[i];
                //     j--;
                // }
                swap(array[i], array[j]);
            }
            array[i] = temp;
            quickSort(array, start, i - 1);
            quickSort(array, i + 1, end);
        }
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
