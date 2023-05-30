#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    string s,p;
    cin >> n >> s >> p;
    for(ll i=0; i<n; i++){
        if(s[i]=='l') s[i]='1';
        else if(s[i]=='o') s[i]='0';
    }
    for(ll i=0; i<n; i++){
        if(p[i]=='l') p[i]='1';
        else if(p[i]=='o') p[i]='0';
    }
    if(s==p) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
