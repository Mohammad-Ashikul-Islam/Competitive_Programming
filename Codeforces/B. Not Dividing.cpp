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
        for(ll i=0; i<n; i++) cin >> v[i];
        for(ll i=0; i<n; i++){
            if(v[i]==1) v[i]++;
        }
        for(ll i=0; i<n; i++){
            if(i+1 <n && v[i+1]%v[i]==0) v[i+1]++;
        }
        for(ll i=0; i<n; i++){
            if(i!=0) cout << " ";
            cout <<v[i];
        }
        cout << endl;
    }
    return 0;
}

