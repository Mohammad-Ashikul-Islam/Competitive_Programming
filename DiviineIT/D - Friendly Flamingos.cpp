#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k, kk;
    cin >> n >> k;
    kk = (k*k);
    ll ans = 0,temp;
    for(temp=k; temp<=n; temp=temp+k){
        if(temp%kk==0) continue;
        ans++;
    }
    cout << ans << endl;
    return 0;
}

