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
        string s;
        cin>>s;
        char ch='a'-1;
        for(ll i=0; i<s.size(); i++) ch = max(ch,s[i]);
        cout << (ch-'a')+1 << endl;
    }
    return 0;
}

