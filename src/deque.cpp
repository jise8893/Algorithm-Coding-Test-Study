#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(4);
    dq.push_back(3);
    dq.push_back(2);
    dq.push_back(1);
    
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    cout<<dq.size()<<"\n";
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size();
    
    // 4 5 3 2 1 
    
}
