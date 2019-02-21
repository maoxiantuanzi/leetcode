/*每次都将已经求出的前size个gray code逆序(为了保证相邻数字有至少一位相同)在最高一位+1，追加到res中，每一次都追加当前size个gray code*/
#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res(1,0);
        for(int i = 0; i < n; i++)
        {
            int size=res.size();
            while(size--)
            {
                int curNum = res[size];
                curNum+= (1<<i);
                res.push_back(curNum);
            }
        }
        return res;
    }
};
