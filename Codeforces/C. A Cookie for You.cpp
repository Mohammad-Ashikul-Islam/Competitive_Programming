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
        ll a,b,m,n;
        cin >> a >> b >> m >> n;
        if(a+b<m+n) cout << "No\n";
        else if(min(a,b)<n) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}
