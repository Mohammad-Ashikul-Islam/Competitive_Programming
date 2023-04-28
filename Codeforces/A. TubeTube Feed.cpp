#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,second,i;
        cin >> n >> second;
        vector<ll> a,b(n);
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            a.push_back(x+i);
        }
        for(i=0; i<n; i++) cin >> b[i];
        ll ans=-1;
        bool flag=false;
        for(i=0; i<n; i++){
            if(a[i]<=second){
                if(ans == -1) ans = i;
                if(b[i]>=b[ans]) ans = i;
            }
        }
        if(ans == -1) cout << "-1\n";
        else cout << ans+1<<endl;
    }
    return 0;
}
