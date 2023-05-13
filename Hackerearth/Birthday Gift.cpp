#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll x,y,z;
        cin >> x >> y >> z;
        ll r=y-x;
        if(r<=0){
            cout << "YES\n";
            continue;
        }
        z = ((z)*(z+1))/2;
        if(z>=r) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
