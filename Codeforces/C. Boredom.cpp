#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,limit) for(long long index=0; index<limit; index++)
#define mx 100005
ll ara[mx],dp[mx],cnt[mx];
int main()
{
    ll n,i;
    cin >> n;
    loop(i,n){
        cin >>ara[i];
        cnt[ara[i]]++;
    }
    dp[0]=0;
    dp[1]=1*cnt[1];//no dp[n-2] available.total value is i*count
    for(i=2; i<mx; i++){
        dp[i]=max( (i*cnt[i]+dp[i-2]), dp[i-1] );//take or don't take.if taken,you can't take
        //dp[i-1] & dp[i+1] (no need to think as it's still not calculated & not added in
        //dp[i]).so if you don't take dp[i-1],total result is dp[i-2]+current_value(it is
        // i*cnt[i],and if you don't take current i,then you can take dp[i-1].so,result it
        //dp[i-1]
    }
    cout << dp[mx-1] << endl;
    return 0;
}
