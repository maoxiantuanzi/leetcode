#include<iostream>
#include<numeric>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n, w;

    cin >> n >> w;
    vector<int> v(n);
    for(int i = 0; i< n; i++)
        cin>>v[i];
    int count = accumulate(v.begin(),v.end(),0);
    // cout<<count<<endl;
    if(count < w)
    {
        cout<< pow(2,n)<<endl;
        return 0;
    }
    vector<int> put_in(n);

    for(int i = 0; i < w; i ++)
    {

    }

    return 0;
}














// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> x1(n), x2(n), y1(n), y2(n);
//     for(int i = 0; i < n; i++)
//         cin>>x1[i];
//     for(int i = 0; i < n; i++)
//         cin>>y1[i];
//     for(int i = 0; i < n; i++)
//         cin>>x2[i];
//     for(int i = 0; i < n; i++)
//         cin>>y2[i];
//     for(int i = 0; i < n - 1; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(x1[i])
//         }
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n ,i = 0;
//     int clock[105][2] = {0};
//     int time_need = 0;
//     int be_late[2] = {0};
//     int be_wake[2] = {0};
//
//     scanf("%d",&n);
//     for(i = 0; i < n; i++)
//     {
//         scanf("%d %d", &clock[i][0], &clock[i][1]);
//         scanf("%d", &time_need);
//         scanf("%d %d", &be_late[0], &be_late[1]);
//         int h = time_need/60,m = time_need%60;
//         be_wake[0] = be_late[0]-h;
//         be_wake[1] = be_late[1] - m;
//         if(be_wake[1]<0)
//         {
//             be_wake[0]--;
//             be_wake[1]+=60;
//         }
//         for(i = n-1;i>=0;i--)
//         {
//             if(clock[i][0]<=be_wake[0]&&clock[i][1]<=be_wake[1])
//                 break;
//         }
//         printf("%d %d", clock[i][0], clock[i][1]);
//     }
// }
