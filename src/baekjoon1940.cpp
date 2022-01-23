#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int arr[n];
    int count=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++)
    {
        for(int k=i+1; k<n; k++)
        {
            if( (arr[i]+arr[k])==m  )
            {
                count++;
            }
        }
    }
    cout<<count<<"\n";
}
