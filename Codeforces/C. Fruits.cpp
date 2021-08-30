#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n,r;
    cin >> n >> r;
    map<string,ll> m;
    ll ara[n],i;
    for(i=0; i<n; i++) cin >> ara[i];
    sort(ara,ara+n);
    for(i=0; i<r; i++){
        string s;
        cin >> s;
        if(m.find(s)!=m.end()) m[s]++;
        else m[s]=1;
    }
    vector<ll> v;
    for(auto it=m.begin(); it!=m.end(); it++) v.push_back(it->second);
    sort(v.begin(),v.end(),greater<ll>());
    ll mn=0,mx=0;
    for(i=0; i<v.size(); i++){
        mn+= v[i]*ara[i];
    }
    for(ll g=0,h=n-1; g<v.size(); g++,h--) mx+=v[g]*ara[h];
    cout << mn << " "<< mx << endl;
    return 0;
}
