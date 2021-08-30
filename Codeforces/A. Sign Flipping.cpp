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
        ll ara[n+1];
        for(i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(i%2==1) ara[i]=abs(x);
            else ara[i]=-1*abs(x);
        }
        cout << ara[1];
        for(i=2; i<=n; i++) cout << " " << ara[i];
        cout << endl;
    }
    return 0;
}
