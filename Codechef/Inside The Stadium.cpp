#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i,ans=0,sum=0;
        cin >> n;
        for(i=1; i<=n; i++){
            ll x;
            cin >> x;
            sum+=x;
            if(sum==i) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
