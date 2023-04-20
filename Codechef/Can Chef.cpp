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
        x = x*15;
        y = y*2;
        if(x>=y) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
