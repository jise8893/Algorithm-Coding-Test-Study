#include <bits/stdc++.h>
using namespace std;
int main(){
    set<pair<string,int>> _set;
    _set.insert({"test",1});
    _set.insert({"test",1});
    _set.insert({"test",1});
    _set.insert({"test",1});
    _set.insert({"test",1});
    cout<<_set.size(); //중복은 제외하므로 출력값 :1
    return 0;
}
