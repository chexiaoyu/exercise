def longestCommonPrefix(strs):
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

if __name__ == "__main__":
    strs = ["c","acc","ccc"]
    res = longestCommonPrefix(strs)
    print(res)