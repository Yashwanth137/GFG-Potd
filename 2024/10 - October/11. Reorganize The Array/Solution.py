class Solution:
    def rearrange(self, arr):
        nums_set = set(arr)
        
        for i in range(len(arr)):
            if i in nums_set:
                arr[i] = i
            else:
                arr[i] = -1
        
        return arr
