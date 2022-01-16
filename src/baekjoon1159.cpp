#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> mp;
    int n;
    string temp;
    bool check=false;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        mp[temp[0]]++;
    }
    
    for(auto element:mp)
    {
        if(element.second>=5){
            cout<<element.first; check=true;
        }
    }
    if(check==false)
        cout<<"PREDAJA";
}
