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
        for(ll i=0; i<n; i++){
            ll temp;
            cin >> temp;
            v.push_back(temp);
        }
        for(ll i=0; i<n; i++){
            ll l;
            cin >> l;
            string s;
            cin >> s;
            for(ll j=0; j<s.size(); j++){
               if(s[j]=='D' && v[i]==9) v[i]=0;
               else if(s[j]=='U' && v[i]==0) v[i]=9;
               else if(s[j]=='U') v[i]--;
               else if(s[j]=='D') v[i]++;
            }
        }
        cout << v[0];
        for(ll i=1; i<v.size(); i++) cout <<" " << v[i];
        cout << endl;
    }
    return 0;
}
