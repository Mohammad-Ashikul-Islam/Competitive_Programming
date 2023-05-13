#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        ll i;
        for(i=0; i<n; i++) cin >> v[i];
        if(is_sorted(v.begin(), v.end())) cout << 0 << endl;
        else{
            ll cnt=0;
            for(i=0; i<n; i++){
                if(abs(v[i]-(i+1))%k != 0) cnt++;
            }
            if(cnt==2) cout << 1 << endl;
            else if(cnt>2) cout << -1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}

