#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main(){
    int N,M;
    cin>>N;
    cin>>M;
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    vector<int> v;
    for(int k=0; k<M; k++)
    {
        int c,d;
        cin>>c;
        cin>>d;
        
        v.push_back(accumulate(&a[c-1],&a[d],0));
        
    }
    for(auto element:v)
    {
        cout<<element<<"\n";
    }
    
}
