/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 *
 * https://leetcode-cn.com/problems/kth-largest-element-in-an-array/description/
 *
 * algorithms
 * Medium (56.19%)
 * Total Accepted:    14.4K
 * Total Submissions: 25.7K
 * Testcase Example:  '[3,2,1,5,6,4]\n2'
 *
 * 在未排序的数组中找到第 k 个最大的元素。请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。
 * 
 * 示例 1:
 * 
 * 输入: [3,2,1,5,6,4] 和 k = 2
 * 输出: 5
 * 
 * 
 * 示例 2:
 * 
 * 输入: [3,2,3,1,2,4,5,5,6] 和 k = 4
 * 输出: 4
 * 
 * 说明: 
 * 
 * 你可以假设 k 总是有效的，且 1 ≤ k ≤ 数组的长度。
 * 
 */
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
			int left = 0, right = nums.size() - 1;
			while (true) {
				int pos = partition(nums, left, right);
				if (pos == k - 1)	return nums[pos];
				else if (pos > k - 1)	right = pos - 1;
				else left = pos + 1;
			}
    }
	int partition(vector<int>& nums, int left, int right) {
		int pivot = nums[left], l = left + 1, r = right;
		while (l <= r) {
			if (nums[l] < pivot && nums[r] > pivot) {
				swap(nums[l++], nums[r--]);
			}
			if (nums[l] >= pivot)	++l;
			if (nums[r] <= pivot)	--r;
		}
		swap(nums[left], nums[r]);
		return r;
	}
};

