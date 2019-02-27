/*
 * @lc app=leetcode.cn id=128 lang=cpp
 *
 * [128] 最长连续序列
 *
 * https://leetcode-cn.com/problems/longest-consecutive-sequence/description/
 *
 * algorithms
 * Hard (41.27%)
 * Total Accepted:    4.2K
 * Total Submissions: 10.1K
 * Testcase Example:  '[100,4,200,1,3,2]'
 *
 * 给定一个未排序的整数数组，找出最长连续序列的长度。
 * 
 * 要求算法的时间复杂度为 O(n)。
 * 
 * 示例:
 * 
 * 输入: [100, 4, 200, 1, 3, 2]
 * 输出: 4
 * 解释: 最长连续序列是 [1, 2, 3, 4]。它的长度为 4。
 * 
 */
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
		if (nums.empty())	return 0;
		unordered_set<int> record(nums.begin(), nums.end());
		int res = 1;
		for (int n : nums) {
			if (record.find(n) == record.end())	continue;
			record.erase(n);
			int prev = n - 1, next = n + 1;
			while (record.find(prev) != record.end())	record.erase(prev--);
			while (record.find(next) != record.end())	record.erase(next++);
			res = max(res, next - prev - 1);
		}
		return res;
    }
};

