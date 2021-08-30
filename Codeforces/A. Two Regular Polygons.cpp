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
        ll a,b;
        cin >> a >>b;
        if(a%b==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
