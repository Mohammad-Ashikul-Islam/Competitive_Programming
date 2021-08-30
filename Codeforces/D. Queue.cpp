#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n,i;
    cin >> n;
    vector<ll> v(n);
    loop(i,0,n) scanf("%lld",&v[i]);
    sort(v.begin(),v.end());
    ll cnt=0,current_sum=0;
    loop(i,0,n){
        if(v[i]>=current_sum) current_sum+=v[i],cnt++;
    }
    pf("%lld\n",cnt);
    return 0;
}
