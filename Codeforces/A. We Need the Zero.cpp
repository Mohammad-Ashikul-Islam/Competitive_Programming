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
        for(ll i=0; i<n; i++) cin >> v[i];
        if(n%2==1){
            ll ans = v[0];
            for(ll i=1; i<n; i++) ans = ans^v[i];
            cout << ans << endl;
        }
        else{
            ll ans = v[0];
            for(ll i=1; i<n; i++) ans = ans^v[i];
            if(ans == 0) cout << "2\n";
            else cout << "-1\n";
        }
    }
    return 0;
}

