#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fnc(vector<ll>& v, ll l)
{
    ll a=10-l;
    return ((a*(a-1))/2)*6;
}


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(auto i:v) cin>>v[i];
        cout << fnc(v,n) << endl;
    }
    return 0;
}

