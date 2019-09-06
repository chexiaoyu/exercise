#
# @lc app=leetcode.cn id=20 lang=python
#
# [20] 有效的括号
#
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in s:
            if len(stack) == 0:
                stack.append(i)
                continue
            if stack[-1] == "(" and i == ")":
                stack.pop()
            elif stack[-1] == "[" and i == "]":
                stack.pop()
            elif stack[-1] == "{" and i == "}":
                stack.pop()
            else:
                stack.append(i)
        if len(stack) == 0:    
            return True
        else:
            return False

