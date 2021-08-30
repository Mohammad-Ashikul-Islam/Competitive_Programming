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
        ll n,i;
        cin >> n;
        ll d[n],p[n];
        for(i=0; i<n; i++) cin >> d[i] >> p[i];
        ll res[n],sum=0;
        res[0]=max(0LL,d[0]-p[n-1]);
        sum+=res[0];
        for(i=1; i<n; i++){
            res[i]=max(d[i]-p[i-1],0LL);
            sum+=res[i];
        }
        ll ans=sum+d[0]-res[0];
        for(i=1; i<n; i++){
            ll temp=sum+d[i]-res[i];
            ans=min(ans,temp);
        }
        cout << ans << endl;
    }
    return 0;
}

