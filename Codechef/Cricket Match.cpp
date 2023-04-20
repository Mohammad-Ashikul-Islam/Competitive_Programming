#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        m = m*6;
        if(n<=m*6) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
