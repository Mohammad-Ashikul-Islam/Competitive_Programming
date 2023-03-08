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
        map<ll,ll> m;
        ll i,ans;
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            if(m[temp]) m[temp]++;
            else m[temp] = 1;
        }
        auto it=m.begin();
        ll mx=it->second;
        for(; it!=m.end(); it++){
            mx = max(mx, it->second);
        }
        cout << n-mx << endl;
    }
    return 0;
}
