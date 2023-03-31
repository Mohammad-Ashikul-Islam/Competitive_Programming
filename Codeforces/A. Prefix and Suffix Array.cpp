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
        map<string, ll> m;
        ll i;
        for(i=0; i<n*2-2; i++){
            string s,p;
            cin >> s;
            p = s;
            reverse(p.begin(),p.end());
            if(m.find(s) != m.end()){
                m[s]--;
            }
            else if(m.find(p) != m.end()) m[p]--;
            else m[s]=1;
        }
        bool ans = true;
        for(auto it=m.begin(); it!=m.end(); it++){
            if(it->second>0) ans =false;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

