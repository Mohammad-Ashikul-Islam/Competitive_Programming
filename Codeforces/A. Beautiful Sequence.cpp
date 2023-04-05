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
        bool ans = false;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(x==i || x<i ) ans =true;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
