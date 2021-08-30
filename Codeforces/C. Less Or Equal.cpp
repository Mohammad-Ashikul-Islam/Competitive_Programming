#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n,k;
    cin >> n>>k;
    ll i,ara[n+1];
    for(i=0; i<n; i++) cin >> ara[i];
    sort(ara,ara+n);
    k--;
    if(k==-1){
        if(ara[0]==1) cout << "-1\n";
        else cout << 1 << endl;
    }
    else if(k==n-1) cout << ara[n-1] << endl;
    else{
        if(ara[k]<ara[k+1]) cout << ara[k] << endl;
        else cout << "-1" << endl;
    }
    return 0;
}

