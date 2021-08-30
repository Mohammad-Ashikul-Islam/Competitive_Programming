#include<bits/stdc++.h>
using namespace std;
long long solve(long long ara[],long long sum,long long cs,long long i,long long n)
{
    if(i==n) return cs;
    int x,y;
    x = cs+ara[i];
    y = cs;
    long long m=solve(ara,sum,x,i+1,n);
    long long p=solve(ara,sum,y,i+1,n);

    if(i==n-1)
        return min(abs(m-(sum-m)),abs(p-(sum-p)));
    else
        return min(m,p);
}
int main()
{
    long long n,sum=0;
    cin >> n;
    long long ara[n+5];
    for(int i=0; i<n; i++) { cin >> ara[i]; sum+=ara[i]; }
    cout << solve(ara,sum,0,0,n)<<endl;
    return 0;
}
