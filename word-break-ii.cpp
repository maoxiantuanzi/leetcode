// #include<vector>
// #include<string>
// using namespace std;
// class Solution {
// public:
//     vector<string> wordBreak(string s, vector<string>& wordDict) {
//
//     }
// };
#include<iostream>
using namespace std;

int main()
{
    int x, y, z, start, end, count=0;
    cin>>x>>y>>z>>start>>end;
    int temp_start=start;
    while(temp_start!=end)
    {
        if(end/temp_start>=2)
        {
            if(temp_start/2*x<y)
            {
                count=count+x;
                temp_start=temp_start+2;
            }
            else
            {
                count=count+y;
                temp_start=temp_start*2;
            }

        }
        else if(end/temp_start<2)
        {
            if((end-temp_start)/2*x>=y+(temp_start*2-end)/2*z)
            {
                count=count+(y+(temp_start*2-end)/2*z);
            }

            else
            {
                count=count+(end-temp_start)/2*x;
            }
            temp_start=end;
        }
        else if(temp_start>end)
        {
            count=count+(temp_start-end)/2*z;
        }
    }
    cout<<count<<endl;
    return 0;
}
