def threeSum(nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        nums.sort()
        if len(nums) == 0 or nums[0] > 0 or nums[-1] < 0:
            return res

        for i in range(len(nums)):
            if nums[i] > 0:
                break
            if i > 0 and nums[i] == nums[i-1]:
                continue
            l = i + 1
            r = len(nums) - 1
            while l < r:
                if nums[i] == -(nums[l] + nums[r]):
                    if l == i + 1 or r == len(nums) - 1:
                        res.append([nums[i], nums[l], nums[r]])
                        l +=1
                        r -= 1
                    elif nums[l] == nums[l-1]:
                        l += 1
                    elif nums[r] == nums[r+1]:
                        r += 1
                    else:
                        res.append([nums[i], nums[l], nums[r]])
                        l += 1
                        r -= 1
                elif nums[i] < -(nums[l] + nums[r]):
                    l += 1
                elif nums[i] > -(nums[l] + nums[r]):
                    r -= 1
        return res

if __name__ == "__main__":
    nums = [1,-1,-1,0]
    res = threeSum(nums)
    print(res)