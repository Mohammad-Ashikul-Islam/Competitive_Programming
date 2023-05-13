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
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        ll i,c=0,sum = 0;
        for(i=0; i<n && c<2; i++){
            if(i==0) sum += v[i];
            else if(v[i]==sum) continue;
            else{
                sum += v[i];
                break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
