#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    cout<<gcd(2,7)<<"\n"; // 최대공약수
    cout<<lcm(2,7)<<"\n"; //최소공배수
    
}
