class Solution:
    def ispar(self,x):
        stack = []
        for i in x:
            if i == '(' or i == '{' or i == '[':
                stack.append(i)
            
            if i == ')' or i == '}' or i == ']':
                if not stack:
                    return False
                
                top = stack[-1]
                
                if i == ')' and top == '(' or i == '}' and top == '{' or i == ']' and top == '[':
                    stack.pop()
                else:
                    return False
        
        return not stack
