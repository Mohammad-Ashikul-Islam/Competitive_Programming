#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,i;
    cin >> n;
    vector<ll> v(n);
    for(i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll ans = -1;
    for(i=0; i<n; i++){
        auto it = upper_bound(v.begin(),v.end(),v[i]+5);
            ll temp_ans = 0;
            ll right_index = it-v.begin(),left_index=i;
            temp_ans = (right_index-left_index);
            ans = max(ans,temp_ans);
    }
    cout << ans << endl;
    return 0;
}
