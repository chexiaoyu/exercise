#
# @lc app=leetcode.cn id=8 lang=python
#
# [8] 字符串转换整数 (atoi)
#
class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        str = str.strip()
        sign = 1
        if not str:
          return 0
        if str[0] == "+" or str[0] == "-":
          if str[0] == "-":
            sign = -1
            str = str[1:]
          elif str[0] == "+":
            sign = 1
            str = str[1:]
        ans = 0
        for i in str:
          if i.isdigit():
            ans = ans*10 + int(i)
          else:
            break
        ans *= sign
        if ans > 2**31-1:
          return 2**31-1
        elif ans < -2**31:
          return -2**31
        else:
          return ans



