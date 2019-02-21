#include<vector>
#include<string>
#include<stack>
#include<stdlib.h>
using namespace std;

class Solution {
public:
    int calculate(int a, int b, string op)
    {
        if(op=="+")
            b=a+b;
        else if(op=="-")
            b=a-b;
        else if(op=="*")
            b=a*b;
        else if(op=="/")
            b=a/b;
        return b;
    }
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0;i<tokens.size();i++)
        {
            s.push(tokens[i]);
            if(s.top()=="+"||s.top()=="-"||s.top()=="*"||s.top()=="/")
            {
                string op=s.top();
                s.pop();
                int a,b;
                a = atoi(s.top().c_str());//atoi不是跨平台的，Windows下可用，故.c_str()
                s.pop();
                b = atoi(s.top().c_str());
                s.pop();
                a = calculate(b, a, op);
                s.push(to_string(a));
            }
        }
        return atoi(s.top().c_str());
    }
};
