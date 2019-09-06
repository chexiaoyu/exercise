#
# @lc app=leetcode.cn id=206 lang=python
#
# [206] 反转链表
#
# https://leetcode-cn.com/problems/reverse-linked-list/description/
#
# algorithms
# Easy (62.30%)
# Likes:    465
# Dislikes: 0
# Total Accepted:    67.8K
# Total Submissions: 108.6K
# Testcase Example:  '[1,2,3,4,5]'
#
# 反转一个单链表。
#
# 示例:
#
# 输入: 1->2->3->4->5->NULL
# 输出: 5->4->3->2->1->NULL
#
# 进阶:
# 你可以迭代或递归地反转链表。你能否用两种方法解决这道题？
#
#
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or head.next == None:
            return head
        left = head
        mid = head
        todo = head.next
        while todo:
            mid.next = todo.next
            todo.next = left
            left = todo
            todo = mid.next
        return left
