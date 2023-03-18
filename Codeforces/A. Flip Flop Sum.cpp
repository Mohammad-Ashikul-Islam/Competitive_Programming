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
        ll i,c=0;
        bool p = false;
        vector<ll> v(n);
        for(i=0; i<n; i++){
            cin >> v[i];
            c += v[i];
            if(i==0) continue;
            if(v[i]==-1 && v[i-1]==-1) p = true;
        }
        if(p) cout << c+4 << endl;
        else if(c != n) cout << c << endl;
        else cout << c-4 << endl;
    }
    return 0;
}
