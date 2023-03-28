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
        ll i,sum=0;
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            sum+=x;
        }
        cout << abs(sum) << endl;
    }
    return 0;
}

