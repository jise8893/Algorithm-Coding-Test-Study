#include <bits/stdc++.h>
using namespace std;
int a[300]={0,};
int main(){
    
    string word;
    cin>>word;
    for(int i=0; i<word.size(); i++)
    {
        a[(int)word[i]]++;
    }
    for(int i=97; i<97+26; i++)
    {
        cout<<a[i]<<" ";
    }
}
