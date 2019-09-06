#include <stdio.h>
#include <windows.h>

using namespace std;
// 分析：用f(n)表示青蛙跳上n阶台阶的跳法数，设定f(0) = 1;
// 当n = 1 时，只有一种跳的方式，一阶跳，f(1) = 1
// 当n = 2 时，有两种跳的方式，一阶跳和两阶跳，f(2) = f(1) + f(0) = 2
// 当n = 3 时，有三种跳的方式，第一次跳出一阶后，后面还有f(3-1)中跳法； 第一次跳出二阶后，后面还有f(3-2)中跳法；第一次跳出三阶后，后面还有f(3-3)中跳法，f(3) = f(2) + f(1) + f(0) = 4
// 当n = n 时，第一次跳出一阶后，后面还有f(n-1)中跳法； 第一次跳出二阶后，后面还有f(n-2)中跳法......第一次跳出n阶后，后面还有 f(n-n)中跳法，即：
// f(n) = f(n-1) + f(n-2) + f(n-3) + ... + f(n-n) = f(0) + f(1) + f(2) + ... + f(n-1)
// 又因为 f(n-1) = f(0) + f(2) + f(3) + ... + f(n-2)
// 两式相减得：f(n) = 2 * f(n-1)    ( n >= 2)
//                  |  0，n = 0
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
