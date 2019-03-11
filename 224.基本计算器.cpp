/*
 * @lc app=leetcode.cn id=224 lang=cpp
 *
 * [224] 基本计算器
 *
 * https://leetcode-cn.com/problems/basic-calculator/description/
 *
 * algorithms
 * Hard (31.22%)
 * Total Accepted:    1.4K
 * Total Submissions: 4.5K
 * Testcase Example:  '"1 + 1"'
 *
 * 实现一个基本的计算器来计算一个简单的字符串表达式的值。
 * 
 * 字符串表达式可以包含左括号 ( ，右括号 )，加号 + ，减号 -，非负整数和空格  。
 * 
 * 示例 1:
 * 
 * 输入: "1 + 1"
 * 输出: 2
 * 
 * 
 * 示例 2:
 * 
 * 输入: " 2-1 + 2 "
 * 输出: 3
 * 
 * 示例 3:
 * 
 * 输入: "(1+(4+5+2)-3)+(6+8)"
 * 输出: 23
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
		int res = 0, sign = 1, n = s.size();
		stack<int> st;
		for (int i = 0; i < n; ++i) {
			char c = s[i];
			if (c >= '0') {
				int num = 0;
				while (i < n && s[i] >= '0') {
					num = 10 * num + (s[i++] - '0');
				}
				res += sign * num;
				--i;
			}
			else if (c == '+') {
				sign = 1;
			}
			else if (c == '-') {
				sign = -1;
			}
			else if (c == '(') {
				st.push(res);
				st.push(sign);
				res = 0;
				sign = 1;
			}
			else if (c == ')') {
				res *= st.top(); st.pop();
				res += st.top(); st.pop();
			}
		}
		return res;
    }
};

