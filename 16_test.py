def threeSumClosest(nums, target):
    """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
    nums.sort()
    dvalue = abs(nums[0] + nums[1] + nums[2] - target)
    if len(nums) == 3:
        return nums[0] + nums[1] + nums[2]
    for i in range(len(nums)):
        l = i + 1
        r = len(nums) - 1
        while l < r:
            if abs(nums[i] + nums[l] + nums[r] - target) <= dvalue:
                dvalue = abs(nums[i] + nums[l] + nums[r] - target)
                ret = nums[i] + nums[l] + nums[r]
                if nums[i] + nums[l] + nums[r] - target < 0:
                    l += 1
                if nums[i] + nums[l] + nums[r] - target > 0:
                    r -= 1
            elif abs(nums[i] + nums[l] + nums[r] - target) > dvalue and \
                nums[i] + nums[l] + nums[r] - target < 0:
                l += 1
            elif abs(nums[i] + nums[l] + nums[r] - target) > dvalue and \
                nums[i] + nums[l] + nums[r] - target > 0:
                r -= 1
    return ret


if __name__ == "__main__":
    nums = [0, 1, 2]
    target = 3
    ret = threeSumClosest(nums, target)
    print(ret)