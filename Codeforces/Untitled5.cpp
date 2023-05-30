#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    ll ans=0,i,current_passenger=0;
    for(i=0; i<n; i++){
        ll a,b;
        cin >> a >> b;
        current_passenger = (current_passenger-a)+b;
        ans = max(ans,current_passenger);
    }
    cout << ans << endl;
    return 0;
}

