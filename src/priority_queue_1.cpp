#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pq; //오름차순 less<int> 내림차순  다익스트라 ,그리디 알고리즘

int main(){
    pq.push(4);
    pq.push(594);
    pq.push(456);
    cout<<pq.top()<<"\n";
    pq.pop();
    cout<<pq.top()<<"\n";
    pq.pop();
    cout<<pq.top()<<"\n";
    return 0;
}
//priority_queue 는 int 말고도 다른 자료구조를 사용가능
//priority_queue<자료형,구현체,비교연산자>
