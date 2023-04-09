#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fnc(ll x, ll y, ll m, ll n)
{
    ll c=0;
    if(x+1>=1 && x+1<=m) c++;
    if(x-1>=1 && x-1<=m) c++;
    if(y+1>=1 && y+1<=n) c++;
    if(y-1>=1 && y-1<=n) c++;
    return c;

}


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll m,n;
        cin >> m >> n;
        ll a,b,c,d;
        cin >> a >>b >> c >> d;
        cout <<  min(fnc(a,b,m,n),fnc(c,d,m,n)) << endl;
    }
    return 0;
}
