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
        ll m,n,a,b,c=0;
        cin >> m >> n >> a >> b;
        ll d=n-m,sum=a+b;
        if(d%sum==0) cout << d/sum << endl;
        else cout << "-1\n";
    }
    return 0;
}
