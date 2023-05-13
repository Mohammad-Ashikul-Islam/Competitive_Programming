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
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        ll ans;
        for(ll left=0,right=n-1; left<=right; left++,right--){
            ll temp= abs(v[right]-v[left]);
            if(left==0) ans = temp;
            else ans = __gcd(ans,temp);
        }
        cout << ans << endl;
    }
    return 0;
}

