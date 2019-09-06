def isValid(s):
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

if __name__ == "__main__":
    s = "[()(]"
    ret = isValid(s)
    print(ret)