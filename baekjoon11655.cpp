#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    getline(cin,word);
    for(int i=0; i<word.size(); i++)
    {
        if(word[i]>64 && word[i]<91)
        {
            word[i]+=13;
            if(word[i]>90)
                word[i]-=26;
        }else if(word[i]>96 && word[i]<123){
            if(word[i]>109)
                word[i]-=26;
            word[i]+=13;
        }
    }
    cout<<word;
}
