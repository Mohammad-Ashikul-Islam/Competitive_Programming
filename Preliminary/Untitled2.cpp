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
        }
        sort(ara,ara+n);
        if(n==1) gcd=ara[0]*ara[0];
        else gcd=ara[0]*ara[n-1];
        pf("Case %lld: %lld\n",i,gcd);
        //if(n==1) cout << gcd*gcd << endl;
        //else cout << gcd << endl;
    }
    //cout << "Welcome to ICPC Dhaka Regional Online Preliminary Contest, 2019\n";
    return 0;
}
