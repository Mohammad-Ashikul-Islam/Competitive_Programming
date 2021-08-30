#include<bits/stdc++.h>
using namespace std;
long long fnc(int ara[][3],int dp[][4],int n,int current_row,int c)
{
    if(current_row==n) return ara[current_row-1][c];
    long long x,y;
    if(c==0){
            if(dp[current_row+1][1]!=-1) x=dp[current_row+1][1];
            else{x=fnc(ara,dp,n,current_row+1,1); dp[current_row+1][1]=x;}
            if(dp[current_row+1][2]!=-1) y=dp[current_row+1][2];
            else{ y=fnc(ara,dp,n,current_row+1,2); dp[current_row+1][2]=y;}
            x += ara[current_row-1][c];
            y += ara[current_row-1][c];
    }
    else if(c==1) {
            if(dp[current_row+1][0]!=-1) x=dp[current_row+1][0];
            else{x=fnc(ara,dp,n,current_row+1,0); dp[current_row+1][0]=x;}
            if(dp[current_row+1][2]!=-1) y=dp[current_row+1][2];
            else{ y=fnc(ara,dp,n,current_row+1,2); dp[current_row+1][2]=y;}
            x += ara[current_row-1][c];
            y += ara[current_row-1][c];
    }
    else {
            if(dp[current_row+1][1]!=-1) x=dp[current_row+1][1];
            else{x=fnc(ara,dp,n,current_row+1,1); dp[current_row+1][1]=x;}
            if(dp[current_row+1][0]!=-1) y=dp[current_row+1][0];
            else{ y=fnc(ara,dp,n,current_row+1,0); dp[current_row+1][0]=y;}
            x += ara[current_row-1][c];
            y += ara[current_row-1][c];
    }
    return min(x,y);
}
int main()
{
    long long u,t,n;
    cin >> t;
    for(u=1; u<=t; u++){
        cin >> n;
        int ara[n][3];
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++) cin >> ara[i][j];
            int dp[n+1][3+1];
            for(int i=0; i<=n; i++)
            for(int j=0; j<=3; j++) dp[i][j]=-1;
        long long ans=min(fnc(ara,dp,n,1,0),min(fnc(ara,dp,n,1,1),fnc(ara,dp,n,1,2)));
        printf("Case %lld: %lld\n",u,ans);
    }
    return 0;
}
