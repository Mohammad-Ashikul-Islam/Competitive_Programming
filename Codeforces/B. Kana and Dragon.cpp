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
    cin >>t;
    while(t--){
        ll x,a,b;
        cin >> x>>a >> b;
        while(a>0 && x>0){
            if(x<=20) break;
            x=(x/2)+10;
            a--;
        }
        if(x>0)
          x=x-(b*10);
        if(x<=0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
