#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=0; i<(5*n); i++){
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    ll c=0,sum=0;
    for(ll i=n; i<v.size()-n; i++){
        sum +=v[i];
        c++;
    }
    double ans = (sum*1.0)/c;
    cout << ans << endl;
    return 0;
}
