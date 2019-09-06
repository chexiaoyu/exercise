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
    int GetNumberOfK(vector<int> data, int k)
    {
        map<int, int> mp;
        int length = data.size();
        for (int i = 0; i < length; i++)
            mp[data[i]]++;
        return mp[k];
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
