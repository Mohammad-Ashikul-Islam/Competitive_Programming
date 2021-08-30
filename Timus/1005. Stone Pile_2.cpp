#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
ll total_sum,minimum_sum=INT_MAX,n;
void fnc(ll ara[],ll i,ll current_sum)
{
    if(i==n) return;
    ll taken_sum1,taken_sum2,not_taken_sum1,not_taken_sum2,ans1,ans2;
    taken_sum1=current_sum+ara[i],taken_sum2=total_sum-taken_sum1,ans1=abs(taken_sum1-taken_sum2);
    not_taken_sum1=current_sum, not_taken_sum2=total_sum-current_sum,ans2=abs(not_taken_sum1-not_taken_sum2);
    minimum_sum=min({minimum_sum,ans1,ans2});
    fnc(ara,i+1,taken_sum1);
    fnc(ara,i+1,current_sum);
}
int main()
{
    ll x,i;
    cin>>n;
    ll ara[n];
    loop(i,0,n){sl(ara[i]); total_sum+=ara[i];}
    fnc(ara,0,0);
    pf("%lld\n",minimum_sum);
    return 0;
}
