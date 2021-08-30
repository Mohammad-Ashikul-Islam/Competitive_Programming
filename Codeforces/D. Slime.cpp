#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define ss(number) scanf("%lld",&number)
#define pp(number) printf("%lld\n",number)
int main()
{
    ll n;
    ss(n);
    if(n==1){ll r; ss(r); pp(r); return 0;}
    ll sum=0,mn,negative_count=0,i,non_negative_count=0;
    for(i=0; i<n; i++){
        ll x;
        ss(x);
        if(i==0) mn=abs(x);
        else mn=min(mn,abs(x));
        if(x<0) negative_count++;
        else non_negative_count++;
        sum+=abs(x);
    }
    if(non_negative_count==n || negative_count==n){
        sum = sum-mn-mn;
        pp(sum);
    }
    else pp(sum);
    return 0;
}

