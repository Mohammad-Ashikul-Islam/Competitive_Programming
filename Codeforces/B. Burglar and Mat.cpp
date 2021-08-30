#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
    ll n,m,i;
    cin >> n >> m;
    vector< pair<ll,ll> > v;
    for(i=0; i<m; i++){
        ll x,y;
        cin >>  x>> y;
        v.push_back(make_pair(y,x));
    }
    sort(v.begin(),v.end(),sortinrev);
    ll c=0,sum=0;
    for(i=0; i<v.size() && c<n; i++){
        for(ll j=0; j<v[i].second; j++){
            if(c==n) break;
            sum+=v[i].first;
            c++;
        }
        if(c==n)  break;
    }
    cout << sum << endl;
    return 0;
}
