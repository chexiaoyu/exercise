#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string LeftRotateString(string str, int n)
    {
        string result = "";
        for (int i = n; i < str.size(); i++)
        {
            result += str[i];
        }
        for (int i = 0; i < n; i++)
        {
            result += str[i];
        }
        return result;
    }
};