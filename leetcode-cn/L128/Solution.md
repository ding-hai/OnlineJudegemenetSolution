# [128. 最长连续序列](https://leetcode.cn/problems/longest-consecutive-sequence/description/)
# 朴素的解法
对于每个数字, 找出从它开始的最长连续序列.
# 优化1
将每个数字用hash表存起来，这样在寻找的过程中时间复杂度为O(1), 这样时间复杂度是O(N^2).
# 优化2
自从一个子序列中最小的那个数字开始扩展, 这样时间复杂度为O(N).

# code
[Solution.cc](./Solution.cc)