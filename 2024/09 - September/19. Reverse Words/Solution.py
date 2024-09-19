class Solution:
    def reverseWords(self,str):
        words = str.split('.')
        words.reverse()
        
        res = ''
        for i in range(len(words)):
            res += words[i]
            if i != len(words) - 1:
                res += '.'
        
        return res
