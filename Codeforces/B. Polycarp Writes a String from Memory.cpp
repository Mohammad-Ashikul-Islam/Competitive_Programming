#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll ans=0,i;
        string s;
        cin >> s;
        set<char> st;
        for(i=0; i<s.size(); i++){
            st.insert(s[i]);
            if(st.size()>3){
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if(!st.empty()) ans++;
        cout << ans << endl;
    }
    return 0;
}

