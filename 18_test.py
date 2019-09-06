def fourSum(nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[List[int]]
    """
    ret = []
    nums.sort()
    if len(nums) == 0 or nums[0] > 0 or nums[-1] < 0:
        return ret

    for i in range(len(nums) - 3):
        if i > 0 and nums[i] == nums[i-1]:
            continue
        target_prime = target - nums[i]
        for j in range(i + 1, len(nums)):
            if j > i + 1 and nums[j] == nums[j-1]:
                continue
            l = j + 1
            r = len(nums) - 1
            while l < r:
                if nums[j] + nums[l] + nums[r] == target_prime:
                    if l == j + 1 or r == len(nums) - 1:
                        ret.append([nums[i], nums[j], nums[l], nums[r]])
                        l += 1
                        r -= 1
                    elif nums[l] == nums[l-1]:
                        l += 1
                    elif nums[r] == nums[r+1]:
                        r -= 1
                    else:
                        ret.append([nums[i], nums[j], nums[l], nums[r]])
                        l += 1
                        r -= 1
                elif nums[j] + nums[l] + nums[r] < target_prime:
                    l += 1
                elif nums[j] + nums[l] + nums[r] > target_prime:
                    r -= 1

    return ret

if __name__ == "__main__":
    nums = [0,4,-5,2,-2,4,2,-1,4]
    target = 12
    ret = fourSum(nums, target)
    print(ret)
