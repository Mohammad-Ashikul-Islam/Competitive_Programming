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
        ll ans = 100-n;
        if(ans%10<=5) ans = ans-(ans%10);
        else ans = ans+(10-ans%10);
        cout << ans << endl;
    }
    return 0;
}
