#
# @lc app=leetcode.cn id=16 lang=python
#
# [16] 最接近的三数之和
#
class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        res = float("inf")
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            l = i + 1
            r = len(nums) - 1
            while l < r:
                cur = nums[i] + nums[l] + nums[r]
                if cur == target:
                    return target
                if abs(res - target) > abs(cur - target):
                    res = cur
                if cur > target:
                    r -= 1
                elif cur < target:
                    l += 1 
        return res

