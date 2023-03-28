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
        ll x=n/2+1,i=1;
        for(; x<=n && i<=n/2; x++,i++){
            if(i==1) cout << x << " " << i;
            else cout << " " << x << " " << i;
        }
        if(n%2==1) cout << " " << n;
        cout << endl;
    }
    return 0;
}

