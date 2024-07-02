class Solution:
    def minRow(self, n, m, a):
        res = float('inf')  
        ans = 0
        for i in range(n):
            row_sum = sum(1 for x in a[i] if x == 1)  
            if row_sum < res:
                res = row_sum
                ans = i
        return ans+1
