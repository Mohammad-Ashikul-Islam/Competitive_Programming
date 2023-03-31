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
        cout << 1;
        for(ll i=3; i<=n; i++) cout << " " << i;
        cout << " "<<2 << endl;
    }
    return 0;
}

