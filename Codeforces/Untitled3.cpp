#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll cas,t;
    cin >> t;
    for(cas=1; cas<=t; cas++){
        vector<ll> v(26);
        ll i;
        for(i=0; i<26; i++) cin >> v[i];
        ll k;
        cin >> k;
        bool coll = false;
        set<string> st;
        while(k--){
            string s;
            cin >> s;
            string p;
            for(i=0; i<s.size(); i++){
                p.push_back((v[s[i]-'A'])+'A');
                //num = num*10 + v[s[i]-'A'];
            }
            ll l = st.size();
            st.insert(p);
            if(st.size()==l) coll = true;
        }
        if(coll == false) printf("Case #%lld: NO\n",cas);
        else printf("Case #%lld: YES\n",cas);
    }
    return 0;
}

