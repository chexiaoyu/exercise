#include <stdio.h>
#include <Windows.h>
#include <iostream>

using namespace std;

struct RandomListNode
{
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL)
    {
    }
};
class Solution
{
public:
    RandomListNode *Clone(RandomListNode *pHead)
    {
        if (!pHead)
        {
            return NULL;
        }
        RandomListNode *curNode = pHead;
        while (curNode)
        {
            RandomListNode *cloneNode = new RandomListNode(curNode->label);
            cloneNode->next = curNode->next;
            curNode->next = cloneNode;
            curNode = cloneNode->next;
        }
        curNode = pHead;
        while (curNode)
        {
            RandomListNode *node = curNode->next;
            if (curNode->random)
            {
                node->random = curNode->random->next;
            }
            curNode = node->next;
        }
        RandomListNode *pCloneHead = pHead->next;
        RandomListNode *tmp;
        curNode = pHead;
        while (curNode->next)
        {
            tmp = curNode->next;
            curNode->next = tmp->next;
            curNode = tmp;
        }
        return pCloneHead;
    }
};
int main()
{
    Solution solution;

    printf();
    return 0;
}
