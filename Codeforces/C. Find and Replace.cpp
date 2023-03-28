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
        unordered_map<char,int> m;
        bool b=true;
        for(ll i=0; i<s.size(); i++){
            if(m.find(s[i])==m.end()){
                m[s[i]]=i%2;
            }
            else{
                if(m[s[i]]==i%2) continue;
                else b=false;
            }
        }
        if(b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

