#include <bits/stdc++.h>
using namespace std;
int n=5;
int k=3;
vector<int> b;
void print(vector<int> b)
{
    for(auto i =b.begin(); i<b.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\n";
    return;
}
void combi(int start,vector<int> b)
{
    if(b.size()==k)
    {
        print(b);
        return;
    }
    for(int i=start+1; i<n; i++)
    {
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
    return;
}
int main(){
    combi(-1,b);
    return 0;
}
