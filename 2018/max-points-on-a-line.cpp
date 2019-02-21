#include<vector>
#include<iostream>
using namespace std;

/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 *     Point() : x(0), y(0) {}
 *     Point(int a, int b) : x(a), y(b) {}
 * };
 */
struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int k, b, count, max=2;
        if(points.size()==0)
            return 0;
        for(int i=0;i<points.size()-1;i++)
        {
            for(int j=i+1;j<points.size();i++)
            {
                count=2;
                k=(points[i].y-points[j].y)/(points[i].x-points[j].x);
                b=points[i].y-points[i].x*k;
                for(int h=0;h<points.size();h++)
                {
                    if(points[h].y == points[h].x*k+b)
                        count++;
                }
                if(count>max)
                    max=count;
            }
        }
        return max;
    }
};
