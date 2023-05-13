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
        ll ans = 0,j;
        for(i=0; i<n; i++){
            ll c=0;
            for(j=i; j<n && v[j]==0; j++) c++;
            ans = max(ans,c);
        }
        cout << ans <<endl;


    }
    return 0;
}
