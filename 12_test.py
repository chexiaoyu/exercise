def intToRoman(num):
    """
        :type num: int
        :rtype: str
        """
    res = ""
    M = num // 1000
    D = (num - M * 1000) // 500
    C = (num - M * 1000 - D * 500) // 100
    L = (num - M * 1000 - D * 500 - C * 100) // 50
    X = (num - M * 1000 - D * 500 - C * 100 - L * 50) // 10
    V = (num - M * 1000 - D * 500 - C * 100 - L * 50 - X * 10) // 5
    I = (num - M * 1000 - D * 500 - C * 100 - L * 50 - X * 10 - V * 5) // 1
    res = M * "M" + D * "D" + C * "C" + L * "L" + X * "X" + V * "V" + I * "I"
    if "IIII" in res and "VIIII" not in res:
        res_ = list(res)
        res_[res.find("IIII"):res.find("IIII") + 4] = 'I' + 'V'
        res = "".join(res_)
    elif "VIIII" in res:
        res_ = list(res)
        res_[res.find("VIIII"):res.find("VIIII") + 5] = 'I' + 'X'
        res = "".join(res_)
    if "XXXX" in res and "LXXXX" not in res:
        res_ = list(res)
        res_[res.find("XXXX"):res.find("XXXX") + 4] = 'X' + 'L'
        res = "".join(res_)
    elif "LXXXX" in res:
        res_ = list(res)
        res_[res.find("LXXXX"):res.find("LXXXX") + 5] = 'X' + 'C'
        res = "".join(res_)
    if "CCCC" in res and "DCCCC" not in res:
        res_ = list(res)
        res_[res.find("CCCC"):res.find("CCCC") + 4] = 'C' + 'D'
        res = "".join(res_)
    elif "DCCCC" in res:
        res_ = list(res)
        res_[res.find("DCCCC"):res.find("DCCCC") + 5] = 'C' + 'M'
        res = "".join(res_)
    print(res)


if __name__ == "__main__":
    num = 3
    intToRoman(num)