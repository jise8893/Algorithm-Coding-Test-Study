#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> s;
    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10);
    s.insert(5);
    s.insert(60);
    
    cout<<"Multiset elements after sort\n";
    for(auto itr=s.begin(); itr!= s.end(); itr++)
        cout<<*itr<<"\n";
    
    auto it1=s.find(10);
    auto it2=s.find(60);
    
    s.erase(it1,it2); //it1~(it2-1)
    cout<<"cut line \n";
    
    for(auto itr=s.begin(); itr!= s.end(); itr++)
        cout<<*itr<<"\n";
    
    s.erase(s.begin());
    
    for(auto itr=s.begin(); itr!= s.end(); itr++)
        cout<<*itr<<"\n";
    
    return 0;
}
