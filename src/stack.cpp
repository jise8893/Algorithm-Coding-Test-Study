#include <bits/stdc++.h>
using namespace std;
stack<string> stk;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stk.push("대");
    stk.push("한");
    stk.push("민");
    stk.push("국");
    while(stk.size()){
        cout<<stk.top()<<"\n";
        stk.pop();
    }
}
