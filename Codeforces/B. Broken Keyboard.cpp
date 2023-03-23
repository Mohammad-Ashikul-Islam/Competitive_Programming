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
        if(l==1){
            cout << "YES\n";
            continue;
        }
        else if(l==2 || l%3==2){
            cout << "NO\n";
            continue;
        }
        else{
            bool ans=true;
            ll i;

            for(i=0; i<l; i++){
                if(i%3==0 || i%3==1) continue;
                if(s[i] == s[i-1]) continue;
                ans = false;
            }
            if(ans) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}

