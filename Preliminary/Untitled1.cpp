#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t;
    cin>> t;
    for(ll i=1; i<=t; i++){
        ll n,gcd=1;
        cin >> n;
        ll ara[n];
        for(ll j=1; j<=n; j++){
        ll x;
        cin >> x;
        ara[j-1]=x;
        if(j==1){gcd=x;continue;}
        if(gcd%x==0) continue;
        else gcd *= x;
        }
        if(n==1) gcd*=gcd;
        else if(count(ara,ara+n,gcd)>0) gcd=gcd*2;
        pf("Case %lld: %lld\n",i,gcd);
        //if(n==1) cout << gcd*gcd << endl;
        //else cout << gcd << endl;
    }
    //cout << "Welcome to ICPC Dhaka Regional Online Preliminary Contest, 2019\n";
    return 0;
}
