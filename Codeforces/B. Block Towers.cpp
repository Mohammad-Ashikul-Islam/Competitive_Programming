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
        vector<ll> v(n);
        for(i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin()+1, v.end());
        for(i=0; i<n; i++){
            ll x=v[i];
            if(i==0){
                sum = x;
                continue;
            }
            if(x>sum){
                ll temp = x-sum;
                if(temp%2==0) sum += temp/2;
                else sum += (temp/2)+1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
