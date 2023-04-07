#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l,k;
        cin >> l >> k;
        string s;
        cin >> s;
        if(s[0]=='0'){
            s[0]='1';
            k--;
        }
        for(ll i=0; i<k; i++) s.push_back('0');
        cout << s << endl;
    }
    return 0;
}
