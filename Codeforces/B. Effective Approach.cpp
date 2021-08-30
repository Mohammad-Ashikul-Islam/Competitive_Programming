#include<bits/stdc++.h>
using namespace std;
long long ara[100005][2];
int main()
{
    long long i,j,x,q,ans1=0,ans2=0,n;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> x;
        if(ara[x][0]==0) ara[x][0]=i;
        ara[x][1]=n-i+1;
    }
    cin >> q;
    for(j=1; j<=q; j++){
        cin >> x;
        ans1+=ara[x][0];
        ans2+=ara[x][1];
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}

