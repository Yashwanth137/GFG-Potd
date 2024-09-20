class Solution:
    def countBuildings(self, height):
        if not height:
            return 0
        
        res, tallest = 1, height[0]
        for i in range(1, len(height)):
            if height[i] > tallest:
                res += 1
                tallest = height[i]
        
        return res
