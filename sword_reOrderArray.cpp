#include <stdio.h>
#include <Windows.h>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    void reOrderArray(vector<int> &array)
    {
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 == 0)
            {
                even.push_back(array[i]);
            }
            else
            {
                odd.push_back(array[i]);
            }
        }
        for (int i = 0; i < odd.size(); i++)
        {
            array[i] = odd[i];
        }
        for (int i = odd.size(); i < array.size(); i++)
        {
            array[i] = even[i - odd.size()];
        }
    }
};
int main()
{
    vector<int> array_;
    Solution solution;
    vector<int> array = {0, 1, 2, 3, 4, 5};
    solution.reOrderArray(array);
    printf("%d", array[0]);
    system("pause");
    return 0;
}
