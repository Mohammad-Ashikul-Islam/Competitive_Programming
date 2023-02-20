#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    double temp = ((c*1.0)/d);
    if(b<=temp){
        cout << (a*b) << endl;
    }
    else{
        ll sum=(a/d)*c;
        a = a%d;
        ll x = (a*b),y= c +((d-a)*b);
        sum += min(x,y);
        cout << sum << endl;

    }
    return 0;
}
