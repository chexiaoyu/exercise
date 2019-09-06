#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string.h>

using namespace std;

class Solution
{
public:
    int ViolentMatch(string s, string p)
    {
        int sLen = s.size();
        int pLen = p.size();

        int i = 0;
        int j = 0;
        while (i < sLen && j < pLen)
        {
            if (s[i] == p[j])
            {
                //①如果当前字符匹配成功（即S[i] == P[j]），则i++，j++
                i++;
                j++;
            }
            else
            {
                //②如果失配（即S[i]! = P[j]），令i = i - (j - 1)，j = 0
                i = i - j + 1;
                j = 0;
            }
        }
        //匹配成功，返回模式串p在文本串s中的位置，否则返回-1
        if (j == pLen)
            return i - j;
        else
            return -1;
    }

    int KMPSearch(string s, string p)
    {
        int i = 0;
        int j = 0;
        int sLen = s.size();
        int pLen = p.size();
        vector<int> next(pLen, int(0));
        GetNext(p, next);
        while (i < sLen && j < pLen)
        {
            if (j == -1 || s[i] == p[j])
            {
                i++, j++;
            }
            else
            {
                j = next[j];
            }
        }
        if (j == pLen)
        {
            return i - j;
        }
        else
        {
            return -1;
        }
    }

private:
    void GetNext(string p, vector<int> &next)
    {
        next[0] = -1;
        int pLen = p.size();
        int k = -1;
        int j = 0;
        while (j < pLen - 1)
        {
            if (k == -1 || p[j] == p[k])
            {
                ++k, ++j;
                next[j] = k;
            }
            else
            {
                k = next[k];
            }
        }
    }
};
int main()
{
    Solution solution;
    string s = "BBC ABCDAB ABCDABCDABDE";
    string p = "ABCDABD";
    // int result = solution.ViolentMatch(s, p);
    int result = solution.KMPSearch(s, p);
    printf("%d\n", result);
    system("pause");
    return 0;
}
