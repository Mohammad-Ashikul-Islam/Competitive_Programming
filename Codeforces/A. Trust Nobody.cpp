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
        ll ans = -1;
        for(i=0; i<n; i++){
            ll temp = i,liar=0;
            for(ll j=0; j<n; j++){
                if(v[j]>temp) liar++;
            }
            if(liar==temp) ans = liar;
        }
        cout << ans << endl;
    }
    return 0;
}

