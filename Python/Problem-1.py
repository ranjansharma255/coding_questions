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
        lis=[]
        for i in nums:
            if target-i in nums:
                if i==(target-i):
                    if nums.count(i)>=2:
                        lis.append(nums.index(i))
                        x=nums.index(i)
                        lis.append(nums.index(i,x+1))
                        break
                    else:
                        continue
                else:       
                    lis.append(nums.index(i))
                    lis.append(nums.index(target-i))
                    break
        return lis
                

