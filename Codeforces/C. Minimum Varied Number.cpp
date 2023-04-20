#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >>n;
        ll i=9;
        vector<ll> v;
        while(n>0 && i>0){
            if(n<=i){
                v.push_back(n);
                n = 0;
                break;
            }
            n = n-i;
            v.push_back(i);
            i--;
        }
        //if(n!=0) v.push_back(n);
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); i++) cout << v[i];
        cout << endl;
    }
    return 0;
}

