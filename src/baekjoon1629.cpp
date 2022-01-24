#include <bits/stdc++.h>
using namespace std;
unsigned long long a,b,c;
unsigned long long modular(unsigned long long a, unsigned long long b)
{
    if(b==1)
        return a%c;
    
    
    unsigned long long c_= modular(a,b/2);
    c_=(c_*c_)%c;
    if(b&1)
        c_=(c_*a)%c;
    return c_;
    
}
int main()
{
    cin>>a>>b>>c;
    cout<<modular(a,b);
}
