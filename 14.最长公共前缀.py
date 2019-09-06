#
# @lc app=leetcode.cn id=14 lang=python
#
# [14] 最长公共前缀
#
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) == 0:
            return ""
        res = strs[0]
        for str in strs:
            while str.find(res) != 0:
                res_ = list(res)
                res_ = res_[0:len(res_) - 1]
                res = "".join(res_)
                if len(res) == 0:
                    return ""
        return res

