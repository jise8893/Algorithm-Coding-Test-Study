#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int c,m;
    cin>> c>>m;
    map<string,int> mp1;
    map<int,string> mp2;
    string temp;
    
    
    for(int i=1; i<c+1; i++)
    {
        cin>>temp;
        mp1.insert({temp,i});
        mp2.insert({i,temp});
    }
    
    for(int k=0; k<m; k++)
    {
        cin>>temp;
        if(temp[0]>58)
        {   
            cout<<mp1.find(temp)->second<<"\n";
  
        }else{
            cout<<mp2.find(stoi(temp))->second<<"\n";
        }
    }
    
    
}
