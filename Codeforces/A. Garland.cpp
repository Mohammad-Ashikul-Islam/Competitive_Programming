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
        set<char> st;
        //ll temp = n;
        for(ll i=0; i<s.size(); i++){
            st.insert(s[i]);
        }
        if(st.size()==1) cout << "-1\n";
        else if(st.size()==4) cout << "4\n";
        else if(st.size()==3) cout << "4\n";
        else if(st.size()==2){
            bool tp=false;
            sort(s.begin(),s.end());
            if(s[0]==s[1] && s[1]==s[2]) tp =true;
            else if(s[1]==s[2] && s[2]==s[3]) tp = true;
            if(tp==true) cout << 6 << endl;
            else cout << 4 << endl;
        }
    }
    return 0;
}
