#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,even=0,odd=0;
        cin >> n;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x%2==0) even+=x;
            else odd+=x;
        }
        if(even>odd) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

