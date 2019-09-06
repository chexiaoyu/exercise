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
    int findSecond(vector<int> input)
    {
        vector<int> tmp;
        if (input[0] >= input[1])
            tmp = {input[0], input[1]};
        else
            tmp = {input[1], input[0]};
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] >= tmp[0] && input[i] >= tmp[1])
            {
                tmp[0] = input[i];
            }
            else if (input[i] < tmp[0] && input[i] >= tmp[1])
            {
                tmp[1] = input[i];
            }
        }
        return tmp[1];
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
