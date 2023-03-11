#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l;
        string s;
        cin >> l >> s;
        ll x=0,y=0;
        bool flag=false;
        for(ll i=0; i<l; i++){
            if(s[i]=='U') y++;
            else if(s[i]=='D') y--;
            else if(s[i]=='L') x--;
            else x++;
            if(x==1 && y==1) flag=true;
        }
        if(flag==true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
