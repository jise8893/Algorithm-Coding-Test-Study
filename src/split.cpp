#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void split(string input,string delimiter)
{
    long long pos=0;
    string token="";
    while( (pos= input.find(delimiter)) !=string::npos){
        token=input.substr(0,pos);
        v.push_back(token);
        input.erase(0,pos+delimiter.size());
    }
    v.push_back(input);
    
}
int main(){
    split("hello mr my yesterday"," ");
    for(auto i=v.begin(); i<v.end(); i++)
        cout<<*i<<"\n";
    
}
