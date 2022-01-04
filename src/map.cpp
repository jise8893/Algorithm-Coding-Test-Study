#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int v[10];
    unordered_map<string,int> umap;
    //add
    umap.insert({"hello",3});
    //other way modify and add
    umap.emplace("test5",5);
    //권장
    umap["test1"]=4;
    umap.insert({"pop",6});
    umap.emplace("modis",7);
    umap["honey"]=8;
    
    string a="";
    int b=0;

    for(auto element : umap)
    {
        tie(a,b)=element;
        cout<<"itr version: "<<element.first<<" "<<element.second<<'\n';
        cout<<" tie version: "<<a<<" "<<b<<'\n';
        
    }
    
    auto search =umap.find("test5");
    if(search==umap.end()){
        cout<<"Not Found"<<'\n';
    }else{
        cout<<search->first<<" "<<search->second<<'\n';
    }
    umap["test5"]++; //int datatype increase
    cout<<umap.size()<<"\n";
    umap.erase("test5");
    cout<<umap.size()<<"\n";    
    
    
    
    
    return 0;
}
