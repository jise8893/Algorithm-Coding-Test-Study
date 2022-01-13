#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int a[5]={1,2,2,2,3};
    for(int i=0 ;i<5;i++)
    {
        v.push_back(a[i]);
    }
    int x=2;
    
    int c=(int)(upper_bound(v.begin(),v.end(),x)-lower_bound(v.begin(),v.end(),x));
    cout<< c<<" ";
    return 0;
}
