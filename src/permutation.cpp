#include <bits/stdc++.h>
using namespace std;
void printV(vector<int> &v){
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int a[3]={1,2,3};
    vector<int> v;
    for(int i=0; i<3; i++)
    {
        v.push_back(a[i]);
    }
    
    do{
        printV(v);
    }while(next_permutation(v.begin(),v.end())); //오름차순으로 만들 수 있을 경우 true 반환
    
    v.clear();
    cout<<"\n";
    for(int i=2; i>=0; i--)
    {
        v.push_back(a[i]);
        
    }
    
    do{
        printV(v);
        
    }while(prev_permutation(v.begin(),v.end())); //내림차순 만들 수 있을 때 true
    
    
    return 0;
}
