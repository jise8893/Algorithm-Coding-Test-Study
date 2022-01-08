#include <bits/stdc++.h>
using namespace std;
class Point{
    public:
    int x,y;
    Point(int y,int x):y(y),x(x){};
    
    Point(){y=-1; x=-1;};
    
    bool operator <(const Point &a) const{
        return x<a.x; //return x>a.x 오름차순 
    };;
};
int main()
{
    priority_queue<Point> pq;
    pq.push({3,4});
    pq.push({6,5});
    
    cout<<pq.top().x<<"\n";
}
