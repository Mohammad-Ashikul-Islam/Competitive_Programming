#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,q,i;
        cin >> n >> q;
        vector<ll> w(n),v(n);
        for( i=0; i<n; i++){
            cin >> w[i];
            if(i==0) v[i]=w[i];
            else v[i]=v[i-1]+w[i];
        }
        ll l,r,s;
        while(q--){
            cin >> l >> r >> s;
            l--;
            r--;
            ll currentsum;
            currentsum= (l-1==-1?0:v[l-1]);
            currentsum += (v[v.size()-1]-v[r]);
            currentsum += (s*(r-l+1));
            if((currentsum)%2==1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}
