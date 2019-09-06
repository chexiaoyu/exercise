#
# @lc app=leetcode.cn id=6 lang=python
#
# [6] Z 字形变换
#
class Solution(object):
    def convert(self, s, numRows):
        """
				:type s: str
				:type numRows: int
				:rtype: str
				"""
        if numRows == 1:
          return s
        member = 2 * numRows - 2
        res = ""
        for i in range(numRows):
          for j in range(0, len(s) - i, member):
            res += s[j+i]
            if i != 0 and i != numRows-1 and j+member-i<len(s):
              res += s[j+member-i]
        return res