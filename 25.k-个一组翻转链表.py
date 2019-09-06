#
# @lc app=leetcode.cn id=25 lang=python
#
# [25] K 个一组翻转链表
#
# https://leetcode-cn.com/problems/reverse-nodes-in-k-group/description/
#
# algorithms
# Hard (52.30%)
# Likes:    216
# Dislikes: 0
# Total Accepted:    13.4K
# Total Submissions: 25.5K
# Testcase Example:  '[1,2,3,4,5]\n2'
#
# 给你一个链表，每 k 个节点一组进行翻转，请你返回翻转后的链表。
#
# k 是一个正整数，它的值小于或等于链表的长度。
#
# 如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。
#
# 示例 :
#
# 给定这个链表：1->2->3->4->5
#
# 当 k = 2 时，应当返回: 2->1->4->3->5
#
# 当 k = 3 时，应当返回: 3->2->1->4->5
#
# 说明 :
#
#
# 你的算法只能使用常数的额外空间。
# 你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。
#
#
#
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if self.isEnd(head, k):
            return head
        # 哨兵
        pre = ListNode(-1)
        pre.next, cur, count = head, head, 1

        while count <= k:
            cur.next, pre, cur, count = pre, cur, cur.next, count + 1
        nexthead = self.reverseKGroup(cur,k) # nexthead 下一组翻转后的头节点

        head.next = nexthead #当前组的head在翻转后成为尾节点，其next指向nexthead 下一组翻转后的头节点
        return pre  # 返回 翻转后的头节点

    # 递归终止条件：剩余链表长度小于k
    def isEnd(self, head, k):
        count = 0
        cur = head
        while cur != None:
            count += 1
            cur = cur.next
            if count >= k:
                return False
        return True
