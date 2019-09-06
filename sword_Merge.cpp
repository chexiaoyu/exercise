#include <stdio.h>
#include <Windows.h>
#include <iostream>

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
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
    {
        ListNode *prehead = new ListNode(-1);
        ListNode *pHead = prehead;
        while (pHead1 && pHead2)
        {
            if (pHead1->val <= pHead2->val)
            {
                pHead->next = pHead1;
                pHead1 = pHead1->next;
            }
            else
            {
                pHead->next = pHead2;
                pHead2 = pHead2->next;
            }
            pHead->next = pHead1 != NULL ? pHead1 : pHead2;
            pHead = pHead->next;
        }
        return prehead->next;
    }
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
