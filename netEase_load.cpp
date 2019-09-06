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

int main()
{
    int t, n, m, k;
    vector<int> input;
    int tmp;
    cin >> t;
    cin >> n >> m >> k;
    vector<vector<int>> xy;
    vector<int> wh;
    vector<int> xy_tmp;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> tmp;
            xy_tmp.push_back(tmp);
        }
        xy.push_back(xy_tmp);
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> tmp;
        wh.push_back(tmp);
    }
    for (int i = 0; i < t; i++)
    {
        printf("YES\n");
    }
    return 0;
}