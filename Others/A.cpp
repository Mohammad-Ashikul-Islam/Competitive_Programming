#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[1000],t,i,n,j,temp;
    cin >> t;
    for(i=1; i<=t; i++){
            temp=0;
        cin >> n;
        for(j=0; j<n; j++)
            cin >> ara[j];
        for(j=0; j<n-1; j++){
            if(ara[j+1]-ara[j]==1){temp=1; break;}
        }
        if(temp==0) printf("Case %lld: No\n",i);
        else printf("Case %lld: Yes\n",i);
    }
}
