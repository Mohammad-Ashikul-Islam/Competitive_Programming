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
        ll ans=0,i;
        if(s.size()==1){
            if(s[0]=='^') cout << 1 << endl;
            else cout << 2 << endl;
            continue;
        }
        if(s[0]=='_') ans++;
        if(s[s.size()-1]=='_') ans++;
        ll l = s.size();
        for(i=0; i<l; i++){
            if(s[i]=='_' && i+1<l && s[i+1]=='_'){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

