#include <bits/stdc++.h>
using namespace std;
int a[10][10];
int main()
{
    int n,m;
    cin>> n >>m;
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++)
        {
            scanf("%1d",&a[i][j]); // 1자리만 받기
        }
    }
    return 0;
}
