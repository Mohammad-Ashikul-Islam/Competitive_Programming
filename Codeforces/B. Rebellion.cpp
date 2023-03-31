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
        vector<ll> a,b;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        ll ans=0;
        sort(b.begin(),b.end());
        for(ll i=0; i<n; i++){
            if(a[i] == b[i]) continue;
            ans++;
        }

        cout << ans/2 << endl;
    }
    return 0;
}

