#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(long long index=start; index<limit; index++)
#define ss scanf
int main()
{
    ll n,m,t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        ll ara[11],sum = 0, c = n/(m*10), r = (n-(m*10*c))/m;
        ara[0] = 0;
        for(ll i=1; i<=10; i++) ara[i]=(m*i)%10, sum += ara[i];
        ll ans = sum*c;
        loop(i,1,r+1) ans += ara[i];
        cout << ans << endl;
    }
    return 0;
}

