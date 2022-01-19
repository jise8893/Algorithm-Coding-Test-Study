#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000002]={0,};
    int n,m;
    cin>>n>>m;
    int max=0;
    int sum=0; 
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int t=0; t<m; t++)
    {
        sum+=a[t];
    }
    max=sum;
    for(int i=1; i<n-m+1; i++)
    {
        sum=sum-a[i-1]+a[i+m-1];
        if(max<sum)
            max=sum;
    }
    cout<<max;
}
