#include <stdio.h>
#include <Windows.h>

using namespace std;
class Solution
{
public:
    int rectCover(int number)
    {
        if (number <= 0)
        {
            return 0;
        }
        if (number <= 2)
        {
            return number;
        }
        return rectCover(number - 1) + rectCover(number - 2);
    }
};
int main()
{
    return 0;
}
