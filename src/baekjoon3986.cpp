#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int count=0;
    int times=0;
    cin>>times;
    
    for(int i=0; i<times ;i++)
    {
        stack<char> stk;
        cin>>s;
        for(char a: s)
        {
            if(stk.empty())
            {
                stk.push(a);
            }else{
                if(stk.top()==a)
                {
                    stk.pop();
                }else{
                    stk.push(a);
                }
            }
        }
        if(stk.empty())
            count++;
            
        
    }
    cout<<count;
}
