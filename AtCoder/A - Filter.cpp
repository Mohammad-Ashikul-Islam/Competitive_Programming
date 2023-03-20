#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x%2==0) v.push_back(x);
    }
    cout << v[0];
    for(ll i=1; i<v.size(); i++) cout << " " << v[i];
    cout << endl;
    return 0;
}
