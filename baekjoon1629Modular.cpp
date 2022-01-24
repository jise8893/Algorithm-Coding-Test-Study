#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c;
    unsigned long long total=1;
    cin>>a>>b>>c;
    while(b)
    {
        if(b&1)
            total=(total*a) %c;
        
        b=b/2;
        a=(a*a)%c;
    }
    cout<<total;
}
