#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,i,sum=0;
        cin >>n ;
        vector<ll> v(n);
        for(i=0; i<n; i++){
            cin >> v[i];
            sum+=v[i];
        }
        if(sum%2==1) cout << "NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
