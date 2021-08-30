#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
ll fnc(map<ll,ll> s){
    if(s[3]==-1 || s[1]==-1 || s[2]==-1) return LONG_MAX;
    return max({s[3],s[1],s[2]})-min({s[3],s[1],s[2]})+1;
}
int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<ll,ll> m;
        m[1]=-1;
        m[2]=-1;
        m[3]=-1;
        ll minimum=LONG_MAX;
        for(ll i=0; i<s.size(); i++){
            ll x=s[i]-'0';
            m[x]=i+1;
            minimum=min(fnc(m),minimum);
        }
        if(minimum==LONG_MAX) minimum=0;
        cout << minimum << endl;
    }
    return 0;
}
