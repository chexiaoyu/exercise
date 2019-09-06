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
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int i = nums.size() - 1;
        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }
        if (i >= 0)
        {
            int j = nums.size() - 1;
        }
    }

private:
    void swap(vector<int> &nums, int i, int j)
    {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }

    void reverse(vector<int> &nums, int start)
    {
        int i = start, j = nums.size() - 1;
        while (i < j)
        {
            swap(nums, i, j);
            i++;
            j--;
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
