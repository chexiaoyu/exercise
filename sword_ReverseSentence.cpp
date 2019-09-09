#include <stdio.h>
#include <iostream>
#include <sstream>
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
    string ReverseSentence(string str)
    {
        vector<string> result_tmp;
        string result;
        int n = str.size();
        string tmp;
        for (int i = 0; i < n + 1; i++)
        {
            if (str[i] != ' ' && str[i] != '\0')
            {
                tmp += str[i];
            }
            else if (str[i] == ' ')
            {
                result_tmp.push_back(tmp);
                tmp.clear();
                result_tmp.push_back(to_string(str[i]));
            }
            else if (str[i] == '\0')
            {
                result_tmp.push_back(tmp);
            }
        }

        for (int i = result_tmp.size() - 1; i >= 0; i--)
        {
            if (result_tmp[i] == "32")
                result += " ";
            else
                result += result_tmp[i];
        }
        return result;
    }
};

int main()
{
    Solution solution;
    string s = "I am a student.";
    string result = solution.ReverseSentence(s);
    // printf();
    system("pause");
    return 0;
}
