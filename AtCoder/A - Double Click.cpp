#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,d;
    cin >> n >> d;
    vector<ll> v(n);
    ll ans = -1;
    for(ll i=0; i<n; i++) cin >> v[i];
    for(ll i=1; i<n; i++){
        if(v[i]-v[i-1] <= d){
            ans = v[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
