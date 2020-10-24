/*
Problem: Given an array of integers, return indices of the two numbers such that add up
to a specific target.

You may assume that each input would have exactly one solution.
Example:

Given nums = [2, 7, 11, 15], target = 9
Because nums[0] + nums[1] = 2 + 7 = 9, return (0, 1)
*/

func twoSum(nums: [Int], target: Int) -> (Int, Int)? {
  var dic = [Int: Int]()

  for i in 0..<nums.count{
     let difference = target - nums[i]
     if let j = dic[difference] {
      return (j, i)
     }
     dic[nums[i]] = i
  }

  return nil
}

print(twoSum(nums: [2, 7, 11, 15], target: 9) ?? "not found")
