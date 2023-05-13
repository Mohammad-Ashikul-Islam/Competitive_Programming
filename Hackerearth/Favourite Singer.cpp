#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,i;
    cin >> n;
    map<ll,ll> m;
    for(i=0; i<n; i++){
        ll x;
        cin >> x;
        m[x]++;
    }
    vector<ll> v;
    for(auto it=m.begin(); it!=m.end(); it++) v.push_back(it->second);
    sort(v.rbegin(),v.rend());
    ll c=1;
    for(i=1; i<v.size(); i++){
        if(v[0]==v[i]) c++;
        else break;
    }
    cout <<c << endl;
    return 0;
}

