#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long p=0;
    
    while(cin>>p)
    {
        unsigned long long cnt=1;
        int ret=1;    
        while(true)
        {
            if(cnt%p==0)
            {
              cout<<ret<<"\n"; 
              break;
            }
            ret++;
            cnt=cnt*10+1;
            cnt%=p; //speed modular 
        }
        
    }
    
}
