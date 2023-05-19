#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll i;
        for(i=0; i<n; i++) cin >> v[i];
        ll ans = 0;
        for(i=0; i<n; i++) ans = __gcd(ans,abs(v[i]-(i+1)));
        //cout << "Ans is: " << ans << endl;
        cout << ans << endl;
    }
    return 0;
}
