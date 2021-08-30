#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf
void print(ll i)
{
    cout << "hello: " <<i << endl;
}
int main()
{
    ll n,p,w,d;
    cin >> n >> p >> w >> d;
    if(p==0){ cout << "0 0 " << n << endl; return 0; }
    ll x=(p-(d*n))/(w-d);
    //double x1=(p-(d*n*1.0))/(w*1.0 - d);
    //if(x<0) { cout << "-1" <<endl; return 0;}
    ll y=n-x;
    //ll y1=n-x1;
    //cout << x << " " << y << " " << w*x+d*y << endl;
    //if(y<0) { cout << "-1" <<endl; return 0;}
    if(x*w+y*d != p || x+y!=n){ cout << "-1" << endl; }
    else cout << x << " " << y << " " << n-x-y << endl;
    return 0;
}

