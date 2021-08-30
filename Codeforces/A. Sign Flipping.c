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
        for(i=0; i<n; i++) cin >> ara[i];
        sort(ara,ara+n);
        printf("%lld",abs(ara[0])*-1);
        for(i=1; i<n/2; i++) printf(" %lld",abs(ara[i])*-1);
        for(i=n/2+1; i<n; i++) printf(" %lld",abs(ara[i]));
        printff("\n");
    }
    return 0;
}
