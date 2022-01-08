#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(7);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<"\n";
    q.pop();
    cout<<q.size() <<"\n";
    return 0;
}
//bfs fifo 
