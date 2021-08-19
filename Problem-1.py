"""PROBLEM - 1"""
"""
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
"""

"""
Example 1:
      Input: nums = [2,7,11,15], target = 9
      Output: [0,1]
      Output: Because nums[0] + nums[1] == 9, we return [0, 1].
"""


#Approach 1: Brute Force Approach

#Gave a runtime of 40ms

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        for y in range(len(nums)):
            for x in range(y+1,len(nums)):
                
                if (nums[y] + nums[x]) == target:
                    return (y,x) 
                

