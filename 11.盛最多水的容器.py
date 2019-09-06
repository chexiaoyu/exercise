#
# @lc app=leetcode.cn id=11 lang=python
#
# [11] 盛最多水的容器
#
class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        maxarea = 0
        i = 0
        j = len(height) - 1
        while i != j:
            current_value = min(height[i], height[j]) * (j - i)
            if maxarea <= current_value:
                maxarea = current_value
            if height[i] <= height[j]:
                i += 1
            else:
                j -= 1
        return maxarea


