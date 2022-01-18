#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input,string delimiter)
{
    vector<string> v;
    long long pos=0;
    string token="";
    while((pos=input.find(delimiter))!=string::npos)
    {
        token=input.substr(0,pos);
        v.push_back(token);
        input.erase(0,pos+delimiter.size());
    }
    v.push_back(input);
    return v;
    
}

int main()
{
    vector<string> ok(101);
    int n;
    string st;
    cin>>n>>st;
    vector<string> v;
    fill(ok.begin(), ok.end(),"NE");
    
    v=split(st,"*");
    for(int i=0; i<n; i++)
    {
        string temp;
        long long pos=0;
        cin>>temp; 
        pos=temp.find(v[0]);
        if(pos==0){
            temp.erase(0,pos+v[0].size());
            pos=temp.find(v[1]);
            while((pos=temp.find(v[1]))!=string::npos)
            {
                
                if(pos==(temp.length()-v[1].length())) 
                    ok[i]="DA";
                temp.erase(0,pos+v[1].size());
                
            }
        }
        
    }
    for(int i=0; i<n; i++)
    {
        cout<<ok[i]<<"\n";
    }
    
}
