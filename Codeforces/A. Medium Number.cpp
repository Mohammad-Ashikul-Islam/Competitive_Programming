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
        cout << v[1] << endl;
    }
    return 0;
}
