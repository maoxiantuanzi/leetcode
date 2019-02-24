/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 *
 * https://leetcode-cn.com/problems/3sum/description/
 *
 * algorithms
 * Medium (20.31%)
 * Total Accepted:    34.8K
 * Total Submissions: 171K
 * Testcase Example:  '[-1,0,1,2,-1,-4]'
 *
 * 给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0
 * ？找出所有满足条件且不重复的三元组。
 * 
 * 注意：答案中不可以包含重复的三元组。
 * 
 * 例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，
 * 
 * 满足要求的三元组集合为：
 * [
 * ⁠ [-1, 0, 1],
 * ⁠ [-1, -1, 2]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		if (nums.empty() || nums.back() < 0 || nums.front() > 0)	return {};
		for (int k = 0; k < nums.size(); k++) {
			if (nums[k] > 0)	break;
			if (k > 0 && nums[k] == nums[k - 1])	continue;
			int target = 0 - nums[k];
			int i = k + 1, j = nums.size() - 1;
			while (i < j)
			{
				if (nums[i] + nums[j] == target) {
					res.push_back({ nums[k],nums[i],nums[j] });
					while (i < j&&nums[i] == nums[i + 1])	++i;
					while (i < j&&nums[j] == nums[j - 1])	--j;
					++i, --j;
				}
				else if (nums[i] + nums[j] < target)	++i;
				else
				{
					--j;
				}
			}
		}
		return res;
    }
};
