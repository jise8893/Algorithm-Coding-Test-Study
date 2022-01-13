#include <bits/stdc++.h>
using namespace std;
int a[100004],psum[100004];
int b,c,n,m;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    cin>>n>>m;
    for(int i=1; i<=n; i++) //i는 1부터
    {
        cin>>a[i];
        psum[i]=a[i]+psum[i-1];
    }
    
    for(int k=0; k<m; k++)
    {
        cin>>b>>c;
        cout<<psum[c]-psum[b-1]<<"\n";
    }
    return 0;
}
