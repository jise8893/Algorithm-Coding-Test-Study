#include <bits/stdc++.h>
using namespace std;
int main(){
    long long M,N=0;
    long long testcase=0;
    vector<pair<long long,long long>> v;
    
    cin>>testcase;
    for(int i=0; i<testcase; i++)
    {
        cin>>M;
        cin>>N;
        v.push_back(make_pair(M,N));
        
    }
    
    for(auto k:v)
    {
        long long temp1=1;
        long long temp2=1;
        
        for(auto j=k.second; j>k.second-k.first; j-- )
        {
             temp1*=j;
             temp1/=temp2++;
        }        
        cout<<temp1<<"\n";
    }
    return 0;    
}
