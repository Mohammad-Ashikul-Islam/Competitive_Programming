#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1){
            cout << 1 <<endl;
            continue;
        }
        cout << n;
        ll i;
        for(i=1; i<n; i++) cout << " " << i;
        cout << endl;
    }
    return 0;
}
