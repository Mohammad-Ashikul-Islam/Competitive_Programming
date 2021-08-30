#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,x,y,sum=0;
    cin >> n;
    n-=1;
    long long ara[n+1];
    for(long long i=1; i<=n; i++)cin >> ara[i];
    cin >> a >> b;
    for(long long i=a; i<b; i++) sum+=ara[i];
    cout << sum << endl;
    return 0;
}

