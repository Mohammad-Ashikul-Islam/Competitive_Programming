#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,even=0,odd=0,sum=0,i;
        cin >> n;
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            x%2==0?even++:odd++;
            sum+=x;
        }
        if(sum%2==1) cout << "YES\n";
        else if(odd>0 && even>0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

