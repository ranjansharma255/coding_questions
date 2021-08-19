"""PROBLEM - 9"""
"""Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not."""
 
"""
Example 1:
	Input: x = 121
	Output: true
Example 2:
	Input: x = -121
	Output: false
	Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
"""


class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        num = x
        sum = 0
        while(x>0):
            rem = x%10
            sum = rem + sum*10
            x = int(x/10)
        if(num == sum):
            return True
        else:
            return False

	"""return str(x) == str(x)[::-1]"""  #Approach-2

#Approach-3
"""chech only half digits for better time complexicity."""
"""Since we divided the number by 10, and multiplied the reversed number by 10, when the original number is less than the reversed number, 
   it means we've processed half of the number digits."""