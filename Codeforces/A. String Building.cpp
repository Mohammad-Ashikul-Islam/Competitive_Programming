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
        ll l = s.size(),i;
        bool ans=true;
        for(i=0; i<l; i++){
            if(i==0){
                if(i+1==l) ans=false;
                else if(s[i] != s[i+1]) ans=false;
                continue;
            }
            if(i==l-1){
                if(i-1==-1) ans = false;
                else if(s[i]!=s[i-1]) ans =false;
                continue;
            }
            if(s[i]==s[i-1] || s[i]==s[i+1]) continue;
            ans = false;

        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

