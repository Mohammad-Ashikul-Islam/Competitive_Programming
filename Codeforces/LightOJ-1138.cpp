#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ssl(input) scanf("%lld",&input)
#define pf printf
ll zeros(ll x)
{
    ll cnt=0,p=5;
    while(x/p!=0){
        cnt+=x/p;
        p*=5;
    }
    return cnt;
}
void fnc(ll n)
{
    ll b=1,e=5*n;
    while(b<=e){
        ll m=(b+e)/2;
        ll z=zeros(m);
        if(z==n){
                ll ans;
                for(ll j=m; j>=m-5 && j>=0; j--){
                    if(zeros(j)==n) ans=j;
                    else break;
                }
                pf("%lld\n",ans); return;
        }
        if(z>n) e=m-1;
        else b=m+1;
    }
    pf("impossible\n");
    return;
}
int main()
{
    ll t,q,i,c=1;
    ssl(t);
    for(; c<=t; c++){
        ssl(q);
        pf("Case %lld: ",c);
        fnc(q);
    }
    return 0;
}
