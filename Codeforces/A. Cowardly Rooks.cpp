#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        bool ans=false;
        cin >> n >> m;
        if(m<n) ans=true;
        for(ll i=0; i<m; i++){
            ll p,q;
            cin >> p >> q;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

