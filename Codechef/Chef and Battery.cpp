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
        ll ans=0;
        if(n>50){
            while(n>50){
            n -= 3;
            ans++;
        }
        if(n==50) cout << ans << endl;
        else if(n==48) cout << ans+1 << endl;
        else cout << ans+3 << endl;
        }
        else{
        while(n<50){
            n += 2;
            ans++;
        }
        if(n==50){
            cout << ans << endl;
        }
        else{
            cout << ans+2 << endl;
        }
        }
    }
    return 0;
}
