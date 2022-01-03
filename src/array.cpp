#include <bits/stdc++.h>
using namespace std;

int main()
{
   int v[10];
   for(int i=1; i<=10; i++) v[i-1]=i;
   
   for(int a:v) cout<<a<<" "; //array v 
   cout<<'\n';
   
   auto a=find(v,v+10,100); //반환값은 메모리 주소값
   if(a==v+10) cout<<"not found"<<"\n"; // v+10은 array[10] 이므로 할당된 v[0~9] 에서 벗어난 할당되지 않은 주소값이다. end()
   
   fill(v,v+10,10);
   for(int a:v) cout<<a<<" ";
   cout<<'\n';
   
   return 0;
   
    
}
