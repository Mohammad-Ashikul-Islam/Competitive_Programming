#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while( t-- ){
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll i,zero=0,nonzero=0;
        for(i=0; i<n; i++) cin >> v[i];
        for(auto u:v) u == 0 ? zero++ : nonzero++;
        if(zero == 0) cout << 0 << endl;
        else if(nonzero >= zero-1) cout << 0 << endl;
        else{
            ll ans = *max_element(v.begin(),v.end());
            if(ans==1) cout << 2 << endl;
            else cout << 1 << endl;
        }

    }
    return 0;
}

