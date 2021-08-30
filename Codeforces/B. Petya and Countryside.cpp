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
    cin >> n;
    ll ara[n],i,mx=-1;
    for(i=0; i<n; i++) cin >> ara[i];
    if(n==1){cout << 1 << endl; return 0;}
    for(i=0; i<n; i++){
        ll sum=1;
        for(ll j=i+1; j<n; j++){
            if(ara[j]>ara[j-1]) break;
            else{
                sum++;
            }
        }
        for(ll j=i-1; j>=0; j--){
            if(ara[j]>ara[j+1]) break;
            else sum++;
        }
        if(i==0) mx=sum;
        else mx=max(sum,mx);
    }
    cout << mx << endl;
    return 0;
}

