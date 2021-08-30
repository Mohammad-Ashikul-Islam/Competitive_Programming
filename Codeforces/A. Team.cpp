#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n;
    cin >> n;
    ll ara[n*n+1],c=0,i;
    for(ll i=1; i<=n*n; i++) cin >> ara[i];
    for(i=1; i<3; i++){
        if(ara[i] + ara[i+3] + ara[i+6] >=2) c++;
    }
    cout << c << endl;
    return 0;
}

