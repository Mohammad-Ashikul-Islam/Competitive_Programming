#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n;
    sl(n);
    if(n%2==0) cout<< n/2 << endl;
    else{
        ll c=0,m=n;
        for(ll i=3; i*i<=n; i+=2) if(n%i==0) {n-=i,c++; break; }
        if(m==n) c++,n=0;
        cout << c+n/2 << endl;
    }
    return 0;
}
