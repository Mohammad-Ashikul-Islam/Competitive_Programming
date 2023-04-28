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
        if(n == 1) cout << 1 << endl;
        else if(n & 1) cout << -1 << endl;
        else{
            ll i,j=1;
            for(i=n; i>0; i-=2,j+=2){
               if(i==n) cout << i << " " << j;
               else cout << " " << i << " "<<j;
            }
            cout << endl;
        }
    }
    return 0;
}

