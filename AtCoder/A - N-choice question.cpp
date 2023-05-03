#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,a,b,i;
    cin >> n >> a >> b;
    ll sum = a+b,ans=-1;
    for(i=1; i<=n; i++){
        ll x;
        cin >> x;
        if(x==sum) ans = i;
    }
    cout << ans << endl;
    return 0;
}
