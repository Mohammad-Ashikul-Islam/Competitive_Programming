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
        ll ara[n],i;
        for(i=0; i<n; i++) cin >> ara[i];
        if(ara[0]>ara[n-1]) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
