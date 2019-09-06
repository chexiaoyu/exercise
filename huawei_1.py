import sys
def bottle(empty):
    total = 0
    n = empty
    while True:
        n = empty / 3
        i = empty % 3
        empty = n + i
        total += n
        if empty == 2:
            total += 1
        elif empty < 2:
            break
    return total


if __name__ == "__main__":
    for line in sys.stdin:
        if int(line) == 0:
            pass
        empty = int(line)
        n = bottle(empty)
        print("%d\n", n)
