#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
bool valid(ll i,ll n){
    if(i>=0 && i<n) return true;
    else return false;
}
int main()
{
    ll n,m;
    cin >> n >> m;
    m--;
    ll ara[n+1],i,sum=0,d=0;
    for(i=0; i<n; i++) cin >> ara[i];
    ll flag1=m-1,flag2=m+1;
    if(ara[m]==1)sum++;
    while(1){
        if(valid(flag1,n)==false || valid(flag2,n)==false) break;
        if(ara[flag1]==1 && ara[flag2]==1) sum+=2;
        flag1--,flag2++;
    }
    while(flag1>=0){
        if(ara[flag1]==1) sum++;
        flag1--;
    }
    while(flag2<n){
        if(ara[flag2]==1) sum++;
        flag2++;
    }
    cout << sum << endl;
    return 0;
}
