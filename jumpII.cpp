#include <stdio.h>
#include <windows.h>

using namespace std;
// ��������f(n)��ʾ��������n��̨�׵����������趨f(0) = 1;
// ��n = 1 ʱ��ֻ��һ�����ķ�ʽ��һ������f(1) = 1
// ��n = 2 ʱ�����������ķ�ʽ��һ��������������f(2) = f(1) + f(0) = 2
// ��n = 3 ʱ�����������ķ�ʽ����һ������һ�׺󣬺��滹��f(3-1)�������� ��һ���������׺󣬺��滹��f(3-2)����������һ���������׺󣬺��滹��f(3-3)��������f(3) = f(2) + f(1) + f(0) = 4
// ��n = n ʱ����һ������һ�׺󣬺��滹��f(n-1)�������� ��һ���������׺󣬺��滹��f(n-2)������......��һ������n�׺󣬺��滹�� f(n-n)������������
// f(n) = f(n-1) + f(n-2) + f(n-3) + ... + f(n-n) = f(0) + f(1) + f(2) + ... + f(n-1)
// ����Ϊ f(n-1) = f(0) + f(2) + f(3) + ... + f(n-2)
// ��ʽ����ã�f(n) = 2 * f(n-1)    ( n >= 2)
//                  |  0��n = 0
// f(n)   =         |  1, n = 1
//                  |  2 * f(n-1) , n >= 2
class Solution
{
public:
    int jumpFloorII(int n)
    {
        if (n <= 0)
            return 0;
        if (n == 1)
            return 1;
        int f = 1;
        for (int i = 2; i <= n; i++)
        {
            f = 2 * f;
        }
        return f;
    }
};
int main()
{
    Solution solution;
    int n = 10;
    int n_ = solution.jumpFloorII(n);
    printf("%d", n_);
    system("pause");
    return 0;
}
