#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll m,n;
        cin >> m >> n;
        string s,p;
        cin >> s >> p;
        ll pr=0,i;
        for(i=p.size()-1; i>=0; i--) s.push_back(p[i]);
        for(i=1; i<s.size(); i++){
            if(s[i]==s[i-1]) pr++;
        }
        if(pr<=1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
