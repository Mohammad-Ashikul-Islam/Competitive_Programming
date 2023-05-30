#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,x,i,sum=0;
    cin >> n >> x;
    vector<ll> v(n);
    for(i=0; i<n; i++) cin >> v[i],sum+=v[i];
    sum = abs(sum);
    ll ans = 0;
    ans = sum/x;
    sum = sum%x;
    if(sum != 0) ans++;
    cout << ans << endl;
    return 0;
}

