#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i;
        cin >> n;
        vector<ll> v(n);
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            v[i] = n-x+1;
        }
        cout << v[0];
        for(i=1; i<v.size(); i++) cout << " " << v[i];
        cout << endl;
    }
    return 0;
}
