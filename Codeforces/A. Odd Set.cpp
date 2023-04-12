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
        ll even=0,odd=0,i;
        for(i=0; i<n*2; i++){
            ll x;
            cin >> x;
            x%2==0?even++:odd++;
        }
        if(even==n && odd==n) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}

