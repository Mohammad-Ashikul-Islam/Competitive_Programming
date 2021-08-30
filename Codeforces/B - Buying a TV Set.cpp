#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define ss scanf
int main()
{
    ll a,b,x,y,cnt=0;
    cin >> a >> b >> x >> y;
    ll g=__gcd(x,y);
    ll temp3=x/g,temp4=y/g;
    cnt = min(a/temp3,b/temp4);
    cout << cnt << endl;
    return 0;
}
