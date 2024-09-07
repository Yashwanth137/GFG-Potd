class Solution:
    def findNth(self,n):
        res, base = 0, 1
        while n > 0:
            res += (n % 9) * base
            n //= 9
            base *= 10
        
        return res
