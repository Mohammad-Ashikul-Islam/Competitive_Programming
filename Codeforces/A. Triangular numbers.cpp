#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
void fnc(ll sign)
{
    if(sign==1) pf("YES\n");
    else pf("NO\n");
}
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    ll n,i;
    sl(n);
    loop(i,1,n+1){
        if((i*i+i)/2==n) {fnc(1); return 0;}
    }
    fnc(2);
    return 0;
}

