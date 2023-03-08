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
        vector<ll> v;
        ll i,c=0;
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            v.push_back(temp);
        }
        for(i=0; i<n; i++){
            ll temp;
            cin >> temp;
            if( (v[i]*2 >= temp) && (temp*2 >= v[i]) ) c++;
        }
        cout << c << endl;
    }
    return 0;
}
