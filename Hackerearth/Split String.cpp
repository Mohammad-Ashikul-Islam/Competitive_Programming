#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        bool f1=false,f2=false;
        set<char> st;
        string s;
        cin >> s;
        int ara[26]={0};
        for(ll i=0; i<n; i++){
            ara[s[i]-'a']++;
            st.insert(s[i]);
        }
        if(st.size()>=k) f2 = true;
        for(ll i=0; i<26; i++){
            if(ara[i]>=k) f1=true;
        }
        if(k>n) cout << "NO\n";
        else if(f1 && f2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

