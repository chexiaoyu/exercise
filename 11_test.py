def maxArea(height):
        """
        :type height: List[int]
        :rtype: int
        """
        maxarea = 0
        i = 0
        j = len(height) - 1
        while i != j:
            current_value = min(height[i], height[j]) * (j - i)
            if maxarea <= current_value:
                maxarea = current_value
            if height[i] <= height[j]:
                i += 1
            else:
                j -= 1
        return maxarea

if __name__ == "__main__":
    height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
    max_value = maxArea(height)