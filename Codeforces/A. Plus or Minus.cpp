#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        if(a+b==c) cout << "+\n";
        else cout << "-\n";
    }
    return 0;
}

