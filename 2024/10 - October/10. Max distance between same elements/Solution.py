class Solution:
    def maxDistance(self, arr):
        first_occ = {}
        max_d = 0
        
        for i, num in enumerate(arr):
            if num in first_occ:
                d = i - first_occ[num]
                max_d = max(max_d, d)
            else:
                first_occ[num] = i
        
        return max_d
