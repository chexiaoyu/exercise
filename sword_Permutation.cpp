#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<string> Permutation(string str)
    {
        vector<string> result;
        if (str.size() == 0)
        {
            return result;
        }
        Permutation(str, 0, result);
        sort(result.begin(), result.end());
        return result;
    }
    void Permutation(string str, int start, vector<string> &result)
    {
        if (start == str.size() - 1)
        {
            result.push_back(str);
        }
        for (int i = start; i < str.size(); i++)
        {
            if (i != start && str[i] == str[start])
            {
                continue;
            }
            swap(str[i], str[start]);
            Permutation(str, start + 1, result);
        }
    }
};
int main()
{
    Solution solution;
    string str = "abc";
    vector<string> result = solution.Permutation(str);
    // printf();
    return 0;
}
