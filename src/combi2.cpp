#include <bits/stdc++.h>
using namespace std;
int n=5;
int k=2;
//5개 중 2개 선택시 for문 2개 
int main(){
    for(int i=0; i<n;i++)
    {
        for(int t=i+1; t<n; t++)
        {
            cout<< i<<" "<<t<<"\n";
        }
        
    }
}
