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
        string s;
        cin >> s;
        bool ans=true;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                if(i==j) continue;
                if(v[i]==v[j] && s[i] != s[j]) ans=false;
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

