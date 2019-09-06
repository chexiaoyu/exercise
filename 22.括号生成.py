#
# @lc app=leetcode.cn id=22 lang=python
#
# [22] 括号生成
#
# 如果我们还剩一个位置，我们可以开始放一个左括号。 如果它不超过左括号的数量，我们可以放一个右括号。
class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ret = []
        def backtrack(S = '', left = 0, right = 0):
            if len(S) == 2*n:
                ret.append(S)
                return ret
            if left < n:
                backtrack(S + '(', left + 1, right)
            if right < left:
                backtrack(S + ')', left, right + 1)
        backtrack()
        return ret

