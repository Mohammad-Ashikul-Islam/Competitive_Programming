#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,a;
    cin >> n >> a;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    bool ans = false;
    for(ll i=0; i<n; i++){
        if(binary_search(v.begin(),v.begin()+n, v[i]+a)) ans =true;
    }
    if(ans) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

