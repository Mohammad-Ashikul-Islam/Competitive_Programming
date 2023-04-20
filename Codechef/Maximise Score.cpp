#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i;
        cin >> n;
        vector<ll> v(n);
        for(i=0; i<n; i++) cin >> v[i];
        vector<ll> ans(n);
        for(i=0; i<n; i++){
            ll temp;
            if(i==0){
                temp=abs(v[1]-v[0]);
            }
            else if(i==n-1){
                temp = abs(v[n-1]-v[n-2]);
            }
            else{
                temp = max(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
            }
            ans[i]=temp;
        }
        ll mx=ans[0];
        for(i=0; i<n; i++) mx = min(mx,ans[i]);
        cout << mx << endl;
    }
    return 0;
}
