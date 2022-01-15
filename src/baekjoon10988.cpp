#include <bits/stdc++.h>
using namespace std;
int main(){
    string word;
    string wordt;
    cin>> word;
    wordt=word;
    reverse(word.begin(),word.end());
    
    if(word==wordt)
        cout<<1;
    else{
        cout<<0;
    }
}
