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
        bool ans=false;
        for(ll i=0; i<n; i++){
            ll temp;
            cin >> temp;
            if(i==0 && temp == 1) ans=true;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

