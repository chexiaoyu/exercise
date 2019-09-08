#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> FindNumbersWithSum(vector<int> array, int sum)
    {
        int length = array.size();
        vector<int> result;
        for (int i = 0; i < length; i++)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (array[i] + array[j] < sum)
                    continue;
                else if (array[i] + array[j] > sum)
                    break;
                else
                {
                    result.push_back(array[i]);
                    result.push_back(array[j]);
                    break;
                }
            }
            if (result.size() > 0)
                break;
        }
        return result;
    }
};

int main()
{
    return 0;
}