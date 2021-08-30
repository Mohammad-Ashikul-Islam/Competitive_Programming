#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
ll fnc(ll n)
{
    ll i=1,sum=0;
    while(n){
        ll x=(n%10);
        if(x==0) {n/=10; continue; }
        sum = (x*i)+sum;
        i*=10;
        n/=10;
    }
    return sum;
}
int main()
{
    ll a,b,c,n,i;
    cin >> a >> b;
    c=a+b;
    ll x=fnc(a),y=fnc(b),z=fnc(c);
   // cout << a << " " << b << " " << c << endl;
   // cout << x << " " << y << " " << z << endl;
    if(x+y==z) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
