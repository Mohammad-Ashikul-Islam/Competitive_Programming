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
    cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a>>b>>c>>d;
        ll x=max(a,b),y=max(b,c),z=min(c,d);
        cout << x << " " << y << " "<<z << endl;
    }
    return 0;
}
