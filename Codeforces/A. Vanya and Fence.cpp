#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n,m,sum=0;
    cin >>n >>m;
    ll ara[n];
    for(ll i=0; i<n; i++) cin >> ara[i];
    for(ll i=0; i<n; i++){
        if(ara[i]>m) sum+=2;
        else sum++;
    }
    cout << sum << endl;
    return 0;
}
