#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll f,d;
        cin >> f >> d;
        f = f*5;
        if(d<=f) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
