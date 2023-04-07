#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll ans = 0;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x>=m) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
