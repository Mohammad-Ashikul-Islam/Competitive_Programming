#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll i;
    for(i=0; i<n; i++) cin >> v[i];
    cout << v[0];
    for(i=1; i<n; i++){
        if(abs(v[i]-v[i-1])==1){
            cout << " " << v[i];
            continue;
        }
        if(v[i-1]<v[i]){
            for(ll j=v[i-1]+1; j<=v[i]; j++) cout << " " << j;
        }
        else{
            for(ll j=v[i-1]-1; j>=v[i]; j--) cout << " " << j;
        }
    }
    cout << endl;
    return 0;
}

