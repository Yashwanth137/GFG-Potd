class Solution:
    def pairWithMaxSum(self, arr):
        if len(arr) < 2:
            return -1
        
        maxsum = -1
        for i in range(len(arr)-1):
            curr = arr[i] + arr[i+1]
            maxsum = max(maxsum, curr)
        
        return maxsum
