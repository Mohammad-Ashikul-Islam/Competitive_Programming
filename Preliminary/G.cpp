#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[10000005];

ll func(ll i, ll n){
    if(dp[i]==-1){
        ll kk = n/i;
        if(kk<1){
            dp[i]= 0;
            return dp[i];
        }
        kk = kk - 1;
        ll sum = (kk * (kk + 1))/2.0;
        ll k=0;
        for(int j=2;i*j<=n;j++){
            k=func(i*j,n);
            sum-=k;
            k=0;
        }

        dp[i]= sum-1;
    }
    return dp[i];
}

int main()
{

    int t;
    cin >> t;
    for(int j = 1; j <=t; j++)
    {
        memset(dp,-1,sizeof(dp));
        ll n, p;
        cin >> n >> p;
        ll res = -1;
        ll sum=0;
        for(int i = 1; i <= n; i++)
        {

            sum=func(i,n);
            //cout<<sum<<endl;
            if(sum >= p)
            {
                res = i;
            }
            else
            {
                break;
            }

        }
        cout << "Case "<<j<<": "<<res << endl;
    }
    return 0;
}

