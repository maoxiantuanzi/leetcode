#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        /*Runtime Error
        cin>>n;
        vector<int> dp;
        if(n <= 1) return 1;
        dp[0] = 1, dp[1] = 2;
        for(int i = 2; i < n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp.back();
        可以对空间进行进一步优化，我们只用两个整型变量a和b来存储过程值，
        首先将a+b的值赋给b，然后a赋值为原来的b，所以应该赋值为b-a即可。
        这样就模拟了上面累加的过程，而不用存储所有的值
        */
        int a = 1, b = 1;
        while(n--)
        {
            b = a + b;
            a = b-a;
        }
        return a;
    }
};
