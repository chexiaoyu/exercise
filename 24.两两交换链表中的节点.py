#
# @lc app=leetcode.cn id=24 lang=python
#
# [24] 涓や袱浜ゆ崲閾捐〃涓殑鑺傜偣
#
# https://leetcode-cn.com/problems/swap-nodes-in-pairs/description/
#
# algorithms
# Medium (60.55%)
# Likes:    226
# Dislikes: 0
# Total Accepted:    26K
# Total Submissions: 43K
# Testcase Example:  '[1,2,3,4]'
#
# 缁欏畾涓€涓摼琛紝涓や袱浜ゆ崲鍏朵腑鐩搁偦鐨勮妭鐐癸紝骞惰繑鍥炰氦鎹㈠悗鐨勯摼琛ㄣ€�
#
# 浣犱笉鑳藉彧鏄崟绾殑鏀瑰彉鑺傜偣鍐呴儴鐨勫€硷紝鑰屾槸闇€瑕佸疄闄呯殑杩涜鑺傜偣浜ゆ崲銆�
#
#
#
# 绀轰緥:
#
# 缁欏畾 1->2->3->4, 浣犲簲璇ヨ繑鍥� 2->1->4->3.
#
#
#
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        # 閫掑綊缁堟鏉′欢
        if head == None or head.next == None:
            return head
        # 鍚笁涓妭鐐圭殑閾捐〃浜ゆ崲鍓嶄袱涓妭鐐�
        next = head.next
        head.next = self.swapPairs(next.next)
        next.next = head
        # 缁欎笂涓€绾х殑杩斿洖鍊�
        return next
