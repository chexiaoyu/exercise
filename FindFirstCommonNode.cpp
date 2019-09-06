#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};
class Solution
{
public:
    ListNode *FindFirstCommonNode(ListNode *pHead1, ListNode *pHead2)
    {
        // ListNode *pHead2_ = pHead2;
        // while (pHead1)
        // {
        //     while (pHead2)
        //     {
        //         if (pHead1 == pHead2)
        //             return pHead1;
        //         pHead2 = pHead2->next;
        //     }
        //     pHead1 = pHead1->next;
        //     pHead2 = pHead2_;
        // }
        // return NULL;
        ListNode *p1 = pHead1;
        ListNode *p2 = pHead2;
        while (p1 != p2)
        {
            p1 = (p1 == NULL ? pHead2 : p1->next);
            p2 = (p2 == NULL ? pHead1 : p2->next);
        }
        return p1;
    }
};
int main()
{
    Solution solution;

    printf();
    system("pause");
    return 0;
}
