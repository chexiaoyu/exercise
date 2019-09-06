class LargerNumKey(str):
    def __lt__(x, y):
        return x + y > y + x


if __name__ == "__main__":
    o = input()
    v = input()
    n = int(input())
    nums = []
    for i in range(n):
        nums.append(int(input()))
    largest_num = ''.join(sorted(map(str, nums), key=LargerNumKey))
    print('0') if largest_num[0] == '0' else print(largest_num)