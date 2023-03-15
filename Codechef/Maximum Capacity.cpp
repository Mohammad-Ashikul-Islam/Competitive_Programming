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
        if(x>8) cout << "NO\n";
        else if(x*y>500) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
