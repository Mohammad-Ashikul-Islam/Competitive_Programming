#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        if(k%2==0 && n%2==1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
