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
        if(m>=n) cout << 0 << endl;
        else cout << n-m << endl;
    }
    return 0;
}
