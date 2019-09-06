def removeDuplicates(nums):
    """
        :type nums: List[int]
        :rtype: int
        """
    flag = nums[0]
    count = 1
    length = len(nums)
    i = 0
    while i < (length - 1):
        if flag == nums[i + 1]:
            del nums[i]
            flag = nums[i]
            length -= 1
        else:
            flag = nums[i + 1]
            count += 1
            i += 1
    return count


if __name__ == "__main__":
    nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
    len = removeDuplicates(nums)
    print(len, nums)