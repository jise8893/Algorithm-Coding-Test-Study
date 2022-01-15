#include <bits/stdc++.h>
using namespace std;

int main()
{
    int map[101]={0,};   
    int a[3];
    int j[4]={0,};
    int total=0;
    for(int i=0; i<3; i++) cin>>a[i];
    
    for(int i=0; i<3; i++)
    {
        int c,d;
        cin>>c>>d;
        for(int i=c+1; i<=d; i++)
        {
            map[i]++;
        }
    }
    
    for(int i=0; i<101; i++)
    {
        j[map[i]]++;
    }
    for(int i=1; i<4; i++)
    {
        total+=j[i]*a[i-1]*i;
    }
    cout<<total;
    
  
}
