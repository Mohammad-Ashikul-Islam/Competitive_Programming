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
        ll sum=0,i;
        for(i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        for(i=0; i<n; i++) sum += (v[i]-v[0]);
        cout << sum << endl;
    }
    return 0;
}

