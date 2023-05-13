#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size()==1 || s.size()==2){
            cout << "NO\n";
            continue;
        }
        int ara[26]={0};
        for(ll i=0; i<s.size(); i++) ara[s[i]-'a']++;
        string p = "YES\n";
        int mx=ara[0];
        for(ll i=0; i<26; i++){
            mx = max(mx,ara[i]);
        }
        ll res = s.size()-mx;
        if(res==1 || res==0) p = "NO\n";
        cout << p;
    }
    return 0;
}
