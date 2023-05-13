#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,q;
    cin >> n >> q;
    vector<ll> v(n),pre(n);
    ll i,k;
    for(i=0; i<n; i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    pre[0]=v[0];
    for(i=1; i<n; i++) pre[i]=pre[i-1]+v[i];
    for(k=0; k<q; k++){
        ll x,y,sum;
        cin >> x >> y;
        x--;
        ll z = x-y;
        if(z>=0) sum = pre[x]-pre[z];
        else sum = pre[x];
        cout << sum << endl;
    }
    return 0;
}

