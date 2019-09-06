#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;
class Solution
{
public:
    int InversePairs(vector<int> data)
    {
        int length = data.size();
        if (length <= 0)
            return 0;
        // 先把数组分割成子数组，先统计出子数组内部的逆序对的数目，
        // 然后再统计出两个相邻子数组之间的逆序对的数目。
        // 在统计逆序对的过程中，还需要对数组进行排序。
        vector<int> copy;
        for (int i = 0; i < length; i++)
            copy.push_back(data[i]);
        long long count = InversePairsCore(data, copy, 0, length - 1);
        return count % 1000000007;
    }

    long long InversePairsCore(vector<int> &data, vector<int> &copy, int start, int end)
    {
        if (start == end)
        {
            copy[start] = data[start];
            return 0;
        }
        int length = (end - start) / 2;
        long long left = InversePairsCore(copy, data, start, start + length);
        long long right = InversePairsCore(copy, data, start + length + 1, end);

        int i = start + length;
        int j = end;
        int indexcopy = end;
        long long count = 0;
        while (i >= start && j >= start + length + 1)
        {
            if (data[i] > data[j])
            {
                copy[indexcopy--] = data[i--];
                count += j - start - length; //count=count+j-(start+length+1)+1;
            }
            else
            {
                copy[indexcopy--] = data[j--];
            }
        }
        for (; i >= start; i--)
            copy[indexcopy--] = data[i];
        for (; j >= start + length + 1; j--)
            copy[indexcopy--] = data[j];
        return count + left + right;
    }
};
int main()
{
    Solution solution;
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 0};
    int result = solution.InversePairs(data);
    // printf();
    system("pause");
    return 0;
}
