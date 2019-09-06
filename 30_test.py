class Solution:
    def findSubstring(self, s, words):
        from collections import Counter
        if len(words) == 0 or len(s) == 0:
            return []
        one_word = len(words[0])
        all_len = len(words) * one_word
        n = len(s)
        words = Counter(words)
        res = []
        i = 0
        for i in range(0, n - all_len + 1):
            s_tmp = s[i:i + all_len]
            c_tmp = []
            for j in range(0, all_len, one_word):
                c_tmp.append(s_tmp[j:j + one_word])
            if Counter(c_tmp) == words:
                res.append(i)
        return res


if __name__ == "__main__":
    soultion = Solution()
    s = "barfoothefoobarman"
    words = ["foo", "bar"]
    res = soultion.findSubstring(s, words)
    print(res)