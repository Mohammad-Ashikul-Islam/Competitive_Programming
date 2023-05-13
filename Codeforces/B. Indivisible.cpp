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
        if(n==1) cout << 1 << endl;
        else if(n%2==1) cout << -1 << endl;
        else{
            ll i;
            for(i=2; i<=n; i+=2){
                if(i==2) cout << 2 << " " << 1;
                else cout << " " << i << " " << i-1;
            }
            cout << endl;
        }
    }
    return 0;
}

