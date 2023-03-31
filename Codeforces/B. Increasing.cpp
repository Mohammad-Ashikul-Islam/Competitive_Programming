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
        sort(v.begin(), v.end());
        bool b=true;
        for(ll i=1; i<v.size(); i++){
            if(v[i]>v[i-1]) continue;
            else b=false;
        }
        if(b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

