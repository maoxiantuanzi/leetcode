/*
 * @lc app=leetcode.cn id=227 lang=cpp
 *
 * [227] 基本计算器 II
 *
 * https://leetcode-cn.com/problems/basic-calculator-ii/description/
 *
 * algorithms
 * Medium (31.10%)
 * Total Accepted:    1.9K
 * Total Submissions: 6K
 * Testcase Example:  '"3+2*2"'
 *
 * 实现一个基本的计算器来计算一个简单的字符串表达式的值。
 * 
 * 字符串表达式仅包含非负整数，+， - ，*，/ 四种运算符和空格  。 整数除法仅保留整数部分。
 * 
 * 示例 1:
 * 
 * 输入: "3+2*2"
 * 输出: 7
 * 
 * 
 * 示例 2:
 * 
 * 输入: " 3/2 "
 * 输出: 1
 * 
 * 示例 3:
 * 
 * 输入: " 3+5 / 2 "
 * 输出: 5
 * 
 * 
 * 说明：
 * 
 * 
 * 你可以假设所给定的表达式都是有效的。
 * 请不要使用内置的库函数 eval。
 * 
 * 
 */
class Solution {
public:
    int calculate(string s) {
		int res = 0, num = 0, n = s.size();
		char op = '+';
		stack<int> st;
		for (int i = 0; i < n; ++i) {
			if (s[i] >= '0') {
				num = num * 10 + (s[i] - '0');
			}
			if ((s[i] < '0'&&s[i] != ' ') || i == n - 1) {
				if (op == '+') st.push(num);
				if (op == '-') st.push(-num);
				if (op == '*' || op == '/') {
					int tmp = (op == '*') ? st.top()*num : st.top() / num;
					st.pop();
					st.push(tmp);
				}
				op = s[i];
				num = 0;
			}
		}
		while (!st.empty()) {
			res += st.top();
			st.pop();
		}
		return res;
    }
};

