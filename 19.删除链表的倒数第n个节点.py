#
# @lc app=leetcode.cn id=19 lang=python
#
# [19] 删除链表的倒数第N个节点
#
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        cur = head
        nnext = cur
        while n > 0:
            nnext = nnext.next
            n -= 1
        
        if nnext == None:
            head = head.next
            return head
        
        while nnext and nnext.next:
            cur = cur.next
            nnext = nnext.next
        
        if nnext:
            cur.next = cur.next.next
        else:
            cur.next = nnext
        
        return head

        

