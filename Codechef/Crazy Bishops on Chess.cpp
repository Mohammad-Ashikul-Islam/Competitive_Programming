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
        if(n==1 || n==2){
            cout << 0 << endl;
            continue;
        }
        n = n-2;
        ll ans = ( (n/2)*2 ) + ( (n/2)*1 );
        if(n%2==1) ans += 2;
        cout << ans << endl;
    }
    return 0;
}
