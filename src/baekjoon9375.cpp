#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    
    string t,g;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        map<string,int> mp;    
        int tot=1;
        cin>>m;
        for(int k=0; k<m; k++)
        {
            cin>>t>>g;
            mp[g]++;
        }
        
        for(auto pos: mp)
        {
            tot*=((pos.second)+1);
        }
        
        cout<<tot-1<<"\n";
    }
    
}
