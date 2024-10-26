class Solution:
    def count(self, head, key):
        res = 0
        if not head:
            return res
            
        while head:
            if head.data == key:
                res += 1
            head = head.next
            
        return res
