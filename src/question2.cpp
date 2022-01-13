#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<char> a;
    string dopa="life is limited";
    cout<<dopa.substr(0,3)<<"\n";
    
    reverse(dopa.begin(),dopa.end());
    cout<<dopa<<"\n";
    dopa+="dopa!!";
    cout<<dopa<<"\n";
}
