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
        v.push_back(x);
    }
    int ara[n+2]={0};
    for(ll i=1; i<=n; i++){
        ll temp = v[i-1];
        if(ara[i]==0){
            ara[temp]=1;
        }
    }
    bool b=false;
    ll ans = count(ara+1,ara+n+1, 0);
    cout << ans << endl;
    for(ll i=1; i<=n; i++){
        if(b==false && ara[i]==0){
            b=true;
            cout<<i;
            continue;
        }
        if(ara[i]==0) cout << " " << i;
    }
    cout << endl;
    return 0;
}

