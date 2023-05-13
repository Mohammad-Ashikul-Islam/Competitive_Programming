#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll lis=0,i;
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x==lis+1) lis++;
        }
        ll m=n-lis;
        if(lis==n) cout << 0 << endl;
        else if(m%k==0) cout << m/k << endl;
        else cout << (m/k)+1 << endl;
    }
    return 0;
}

