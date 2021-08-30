#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t,x,y;
    cin >>t;
    while(t--){
        cin >> x >> y;
        if(x*2<=y) cout << x << " " << 2*x << endl;
        else cout << "-1 -1\n";
    }
    return 0;
}
