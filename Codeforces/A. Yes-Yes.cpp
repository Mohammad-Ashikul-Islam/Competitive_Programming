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
        bool ans=true;
        ll i;
        if(s[0]!='Y' && s[0] !='e' && s[0] !='s'){
            cout << "NO\n";
            continue;
        }
        for(i=1; i<s.size(); i++){
            if(s[i]=='Y' && s[i-1]=='s') continue;
            else if(s[i]=='e' && s[i-1]=='Y') continue;
            else if(s[i]=='s' && s[i-1]=='e') continue;
            else ans =false;
        }
        if(ans==false) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}

