def letterCombinations(digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        ret = []
        dic = {'2': 'abc',
               '3': 'def',
               '4': 'ghi',
               '5': 'jkl',
               '6': 'mno',
               '7': 'pqrs',
               '8': 'tuv',
               '9': 'wxyz'}
        if not digits:
          return []
        n = len(digits)
        def helper(i, tmp):
          if i == n:
            ret.append(tmp)
            return
          for alp in dic[digits[i]]:
            helper(i+1, tmp+alp)
        helper(0, "")
        return ret


if __name__ == "__main__":
    digits = "234"
    ret = letterCombinations(digits)
    print(ret)