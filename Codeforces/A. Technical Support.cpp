#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll i,q=0,a=0;
        for(i=0; i<s.size(); i++){
            if(s[i]=='Q') q++;
            else{
                q--;
                if(q<0) q=0;
            }
        }
        if(a>=q) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}

