#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l;
        cin >> l;
        string s;
        cin >> s;
        ll i,zero=0,one=0;
        for(i=0; i<l; i++) s[i] == '0' ? zero++ : one++;
        ll ans = min(zero,one);
        if(l==1 || ans%2==0) cout << "Ramos\n";
        else cout << "Zlatan\n";
    }
    return 0;
}

