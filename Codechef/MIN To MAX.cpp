#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,c=0,i;
        cin >> n;
        vector<ll> v(n);
        for(i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        ll mn = v[0];
        for(i=0; i<n; i++){
            if(v[i] != mn) c++;
        }
        cout << c << endl;
    }
    return 0;
}
