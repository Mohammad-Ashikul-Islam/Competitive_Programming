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
        if(v[0]==v[n-1]) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << v[n-1] << " " << v[0];
            n--;
            for(ll i=1; i<n; i++) cout << " "<<v[i];
            cout << endl;
        }
    }
    return 0;
}
