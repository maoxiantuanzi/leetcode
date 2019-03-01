/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 *
 * https://leetcode-cn.com/problems/merge-intervals/description/
 *
 * algorithms
 * Medium (34.65%)
 * Total Accepted:    9.5K
 * Total Submissions: 27.4K
 * Testcase Example:  '[[1,3],[2,6],[8,10],[15,18]]'
 *
 * 给出一个区间的集合，请合并所有重叠的区间。
 * 
 * 示例 1:
 * 
 * 输入: [[1,3],[2,6],[8,10],[15,18]]
 * 输出: [[1,6],[8,10],[15,18]]
 * 解释: 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
 * 
 * 
 * 示例 2:
 * 
 * 输入: [[1,4],[4,5]]
 * 输出: [[1,5]]
 * 解释: 区间 [1,4] 和 [4,5] 可被视为重叠区间。
 * 
 */
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
		int n = intervals.size();
		vector<Interval> res;
		vector<int> starts, ends;
		for (int i = 0; i < n; i++) {
			starts.push_back(intervals[i].start);
			ends.push_back(intervals[i].end);
		}
		sort(starts.begin(), starts.end());
		sort(ends.begin(), ends.end());
		for (int i = 0, j = 0; i < n; i++) {
			if (i == n - 1 || starts[i + 1] > ends[i]) {
				res.push_back(Interval(starts[j], ends[i]));
				j = i + 1;
			}
		}
		return res;
    }
};

