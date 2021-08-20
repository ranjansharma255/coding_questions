"""PROBLEM - 7"""
"""
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
"""

"""
Example 1:
	Input: x = 123
	Output: 321

Example 2:
	Input: x = -123
	Output: -321
"""

#Appraoch 1

#First one has a complexicity of O(log(x)) and gave a runtime of 28ms

class Solution:
    def reverse(self, x: int) -> int:
        if x>0: 
            flag = 1
        else:
            flag = 0
        
        x = abs(x)
        sum = 0
        while (x != 0):
            r = x%10
            sum = r + sum*10
            x = int(x/10)
            
        if sum not in range(-pow(2,31),(pow(2,31)-1)):
            return 0
        else:
            if flag == 1:
                return sum
            else:
                return -1*sum


#Approach 2 

#Gave a runtime of 36ms

class Solution:
    def reverse(self, x: int) -> int:
        
        num = str(abs(x))
        
        num = int(num[::-1])
        
        if num not in range(-pow(2,31),(pow(2,31)-1)):
            return 0
        else:
            if x>0:
                return num
            else:
                return -1*num