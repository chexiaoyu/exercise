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
class Solution
{
public:
    // ������λ����ʵ�֣����������������������������Ľ���϶���������ֻ����һ�ε��������
    // �Ľ�������Ը������Ľ��1���ڵ����λ�������ֳַ����룬ÿһ���ﶼ����ֻ����һ�ε����ݺͳɶԳ��ֵ�����
    // ����������ÿһ�����������Էֱ��������ֻ����һ�ε�����
    // ��� ��ͬΪ0 ��ͬΪ1
    void FindNumsAppearOnce(vector<int> data, int *num1, int *num2)
    {
        if (data.size() < 2)
            return;
        int tmp = data[0];
        for (int i = 1; i < data.size(); i++)
        {
            tmp ^= data[i];
        }
        if (tmp == 0)
            return;
        int index = 0;
        while ((tmp & 1) == 0)
        {
            tmp >>= 1;
            ++index;
        }
        *num1 = *num2 = 0;
        for (int i = 0; i < data.size(); i++)
        {
            if (IsBit(data[i], index))
                *num1 ^= data[i];
            else
                *num2 ^= data[i];
        }
    }

    bool IsBit(int num, int index)
    {
        num >>= index;
        return num & 1;
    }
};
int main()
{
    Solution solution;
    vector<int> data = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    int *num1 = &data[0];
    int *num2 = &data[0];
    solution.FindNumsAppearOnce(data, num1, num2);
    printf("%d %d", *num1, *num2);
    system("pause");
    return 0;
}
