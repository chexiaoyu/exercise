def convert(s, numRows):
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

if __name__ == "__main__":
    s = "ABCDE"
    numRows = 4
    res = convert(s, numRows)
    print(res)
