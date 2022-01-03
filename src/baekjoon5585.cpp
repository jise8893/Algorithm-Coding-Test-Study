#include <bits/stdc++.h>
using namespace std;


int main()
{
   int a[6]={500,100,50,10,5,1}; 
   int count=0;
   int money=0;
   cin>>money;
   money=1000-money;
   if(money<1&&money>1000)
        return 0;
    
   for(int t:a)
   {
       count+=money/t;
       money=money%t;
   }
   cout<<count;
   
   return 0;
    
}
