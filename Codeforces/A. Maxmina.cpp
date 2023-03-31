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
        ll one=0;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x==1) one++;
        }
        if(one) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

