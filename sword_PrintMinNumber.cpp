#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
class Solution
{
public:
    string PrintMinNumber(vector<int> numbers)
    {
        string answer = "";
        sort(numbers.begin(), numbers.end(), cmp);
        for (int i = 0; i < numbers.size(); i++)
        {
            answer += to_string(numbers[i]);
        }
        return answer;
    }

    // sort�еıȽϺ���compareҪ����Ϊ��̬��Ա������ȫ�ֺ�����
    // ������Ϊ��ͨ��Ա����������ᱨ��
    // ��Ϊ���Ǿ�̬��Ա�����������ھ������ģ�
    // ��std::sort���ຯ����ȫ�ֵģ�����޷���sort�е��÷Ǿ�̬��Ա������
    // ��̬��Ա��������ȫ�ֺ����ǲ������ھ�������,
    // ���Զ������ʣ����봴���κζ���ʵ���Ϳ��Է��ʡ�
    // ͬʱ��̬��Ա���������Ե�����ķǾ�̬��Ա��
    static bool cmp(int a, int b)
    {
        string A = "";
        string B = "";
        A += to_string(a);
        A += to_string(b);
        B += to_string(b);
        B += to_string(a);

        return A < B;
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
