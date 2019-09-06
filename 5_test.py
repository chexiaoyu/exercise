def longestPalindrome(s):
    """
        :type s: str
        :rtype: str
        """
    res = ""
    for start in range(len(s)):
        for end in range(start, len(s)):
            s_ = s[start:end + 1]
            s_conver = s_[::-1]
            if s_ == s_conver:
                if len(res) <= len(s[start:end + 1]):
                    res = s[start:end + 1]

    if len(res) == 0 and len(s) != 0:
        res = s[0]
    return res


if __name__ == "__main__":
    s = "abb"
    res = longestPalindrome(s)
    print(res)