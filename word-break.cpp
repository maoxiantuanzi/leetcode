#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.size()==0)  return false;
        string ss=' '+s;
        int len=ss.size();
        vector<bool> dp(len,false);
        dp[0]=true;
        for(int i=1;i<len;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string subword=ss.substr(j+1,i-j);
                    if(find(wordDict.begin(),wordDict.end(),subword)!=wordDict.end())
                    {
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[len-1];
    }
};
