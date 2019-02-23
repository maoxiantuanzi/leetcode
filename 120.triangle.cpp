/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 *
 * https://leetcode-cn.com/problems/triangle/description/
 *
 * algorithms
 * Medium (55.91%)
 * Total Accepted:    7.2K
 * Total Submissions: 12.9K
 * Testcase Example:  '[[2],[3,4],[6,5,7],[4,1,8,3]]'
 *
 * 给定一个三角形，找出自顶向下的最小路径和。每一步只能移动到下一行中相邻的结点上。
 * 
 * 例如，给定三角形：
 * 
 * [
 * ⁠    [2],
 * ⁠   [3,4],
 * ⁠  [6,5,7],
 * ⁠ [4,1,8,3]
 * ]
 * 
 * 
 * 自顶向下的最小路径和为 11（即，2 + 3 + 5 + 1 = 11）。
 * 
 * 说明：
 * 
 * 如果你可以只使用 O(n) 的额外空间（n 为三角形的总行数）来解决这个问题，那么你的算法会很加分。
 * 
 */
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
		vector<int> minNums = triangle[triangle.size() - 1];
		for (int i = triangle.size() - 2; i > -1; i--)
		{
			for (int j = 0; j <= i; j++)
			{
				minNums[j] = (minNums[j] < minNums[j + 1] ? minNums[j] : minNums[j + 1]) + triangle[i][j];
			}
		}
		return minNums[0];
    }
};
