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
        string p="codeforces";
        ll ans = 0;
        for(ll i=0,j=0; i<s.size() && j<p.size(); i++){
            if(s[i]!=p[i]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
