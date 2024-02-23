# [73. 矩阵置零](https://leetcode.cn/problems/set-matrix-zeroes/description/)
# 朴素的解法
用一个两个数组 rows, cols 记录应该清零行和列，遍历原始矩阵当matrix[i][j] == 0时, rows[i] = cols[j] = 0;

# 原地算法
如果需要O(1)的空间复杂度, 那么可以用矩阵的第一行来充当 cols 数组， 用第一列充当 rows 数组
遍历 matrix[1..m][1..n] 如果元素 matrix[i][j]==0，则设置 matrix[i][0] = matrix[0][j] = 0
但是为了区别作为flag数组而设置的0 和 本身第一行和第一列就已经包含的 0， 我们在遍历矩阵之前需要用两个变量记录下: 本身第一行和第一列是否已经包含0

# code
[Solution.cc](./Solution.cc)