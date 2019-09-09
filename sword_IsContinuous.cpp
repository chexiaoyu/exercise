#include <stdio.h>
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
    bool IsContinuous(vector<int> numbers)
    {
        sort(numbers.begin(), numbers.end());
        int numOfZero = 0;
        int numOfInter = 0;
        if (numbers.size() == 0)
            return false;
        for (int i = 0; i < numbers.size() - 1; i++)
        {
            if (numbers[i] == 0)
            {
                numOfZero++;
                continue;
            }
            if (numbers[i + 1] == numbers[i])
                return false;
            numOfInter += numbers[i + 1] - numbers[i] - 1;
        }
        if (numOfInter <= numOfZero)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution solution;

    // printf();
    system("pause");
    return 0;
}
