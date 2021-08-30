
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
        ll ara[n];
        for(i=0; i<n; i++) cin >> ara[i];
        sort(ara,ara+n,greater<long long>() );
        cout << ara[0];
        for(i=1; i<n; i++) cout <<" " <<ara[i];
        cout << endl;
    }
    return 0;
}
