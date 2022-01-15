#include <bits/stdc++.h>
using namespace std;
int a[9];
int finish=0;
void combi(int start,vector<int> v)
{
    if(v.size()==7){
        if(accumulate(v.begin(),v.end(),0)==100)
        {
            sort(v.begin(),v.end());
            for(auto element:v){
                cout<<element<<"\n";
            }
            finish=1;
            v.clear();
        }
        
        return;
    }
    
    for(int i=start+1 ; i<9; i++)
    {
        if(finish==1) return;
        v.push_back(a[i]);
        combi(i,v);
        v.pop_back();
    }
    return;
}
int main(){
    
    for(int i=0; i<9; i++)
        cin>>a[i];
    vector<int> v;
    combi(-1,v);
    
}
