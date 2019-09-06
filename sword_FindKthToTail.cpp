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
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
    {
        if (pListHead == NULL)
            return pListHead;
        if (k == 0)
            return NULL;
        ListNode *kth = NULL, *end = pListHead;
        int count = 1;
        while (end != NULL)
        {
            if (count++ == k)
            {
                kth = pListHead;
            }
            else if (count > k)
            {
                kth = kth->next;
            }
            end = end->next;
        }
        return kth;
    }
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
