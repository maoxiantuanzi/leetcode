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
        */
        int a = 1, b = 1;
        cin >> n;
        while(n--)
        {
            b = a + b;
            a = b-a;
        }
        return a;
    }
};
