// Problem:   Two Sum (LeetCode 1)
// Link:      https://leetcode.com/problems/two-sum/
// Level:     Easy
// Language:  TypeScript
// Submitted: 2022-05-03 14:44 UTC
// Verdict:   Accepted

function twoSum(nums: number[], target: number): number[] {
  const comp = {};
  for(let i in nums) {
    if (comp[nums[i]] >= 0) return [comp[nums[i]], i]
    comp[target-nums[i]] = i
  }
};
