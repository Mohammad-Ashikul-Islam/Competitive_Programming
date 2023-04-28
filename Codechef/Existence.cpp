#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        if( (x*x*x*x)+(4*y*y)== (4*x*x*y) ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
