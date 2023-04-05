#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool ans=true;
    for(ll i=1; i<n; i++){
        if(s[i]==s[i-1]) ans=false;
    }
    if(ans) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
