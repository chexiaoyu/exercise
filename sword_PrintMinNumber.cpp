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

    // sort中的比较函数compare要声明为静态成员函数或全局函数，
    // 不能作为普通成员函数，否则会报错。
    // 因为：非静态成员函数是依赖于具体对象的，
    // 而std::sort这类函数是全局的，因此无法再sort中调用非静态成员函数。
    // 静态成员函数或者全局函数是不依赖于具体对象的,
    // 可以独立访问，无须创建任何对象实例就可以访问。
    // 同时静态成员函数不可以调用类的非静态成员。
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
