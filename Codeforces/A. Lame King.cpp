#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        x = abs(x);
        y = abs(y);
        ll ans = min(x,y)*2;
        ll d = max(x,y)-min(x,y);
        if(d==0){
            cout << ans << endl;;
        }
        else if(d==1){
            cout << ans+1 << endl;
        }
        else{
            ans = ans+(d*2-1);
            cout << ans << endl;
        }
    }
    return 0;
}
