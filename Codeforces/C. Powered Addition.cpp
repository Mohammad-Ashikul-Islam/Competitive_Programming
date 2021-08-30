#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ara[n],i;
        for(i=0; i<n; i++) cin >> ara[i];
        ll cmax=ara[0],ans=0;
        for(i=1; i<n; i++){
            if(cmax==ara[i]) continue;
            if(cmax<ara[i]){
                cmax=ara[i];
                continue;
            }
            ll d=abs(ara[i]-cmax);
            ans=max(ans,d);
        }
        if(ans==0){cout << 0 << endl; continue;}
        ans= (long long) log(ans);
        ans+=2;
        cout << ans << endl;
    }
    return 0;
}
