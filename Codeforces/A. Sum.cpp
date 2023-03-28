#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        vector<ll> v(3);
        for(ll i=0; i<3; i++) cin >> v[i];
        sort(v.begin(),v.end());
        if(v[0]+v[1]==v[2]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

