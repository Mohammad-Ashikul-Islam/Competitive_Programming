#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,i;
    cin >> n >>m;
    vector<ll> v;
    for(i=0; i<n; i++){
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }
    ll sum = 0;
    for(i=0; i<m; i++){
        ll temp;
        cin >> temp;
        temp--;
        sum+=v[temp];
    }
    cout << sum << endl;
    return 0;
}
