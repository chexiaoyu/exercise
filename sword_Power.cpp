#include <stdio.h>
#include <Windows.h>

using namespace std;
class Solution
{
public:
    double Power(double base, int exponent)
    {
        double result = 1;
        int sign;
        if (exponent > 0)
        {
            sign = 1;
        }
        else
        {
            sign = -1;
        }
        exponent = sign * exponent;
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }
        return sign == true ? result : 1 / result;
    }
};
int main()
{
    Solution solution;
    double base = 2;
    int exponent = -3;
    double result = solution.Power(base, exponent);
    printf("%f/n", result);
    return 0;
}
