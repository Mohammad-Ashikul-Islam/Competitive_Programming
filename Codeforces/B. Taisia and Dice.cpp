#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,s,r;
        cin >> n >> s >> r;
        vector<ll> v;
        v.push_back(s-r);
        ll sum = r;
        n--;
        if(sum%n==0){
            for(ll i=0; i<n; i++) v.push_back(sum/n);
        }
        else{
            ll temp = sum, divider= (sum/n)+1;
            for(ll i=0; i<n-1; i++){
                v.push_back(divider);
            }
            if(sum%divider !=0)
            v.push_back(sum%divider);
            else{
                v[v.size()-1]--;
                v.push_back(1);
            }
        }
        cout << v[0];
        for(ll i=1; i<v.size(); i++) cout <<" "<< v[i];
        cout << endl;
    }
    return 0;
}

