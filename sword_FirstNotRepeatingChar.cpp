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
    int FirstNotRepeatingChar(string str)
    {
        map<char, int> mp;
        for (int i = 0; i < str.size(); ++i)
            mp[str[i]]++;
        for (int i = 0; i < str.size(); ++i)
        {
            if (mp[str[i]] == 1)
                return i;
        }
        return -1;
    }
};
int main()
{
    Solution solution;
    string str = "google";
    int index = solution.FirstNotRepeatingChar(str);
    // printf();
    system("pause");
    return 0;
}
