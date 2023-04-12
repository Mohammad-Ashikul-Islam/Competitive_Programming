#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s;
    cin >> s;
    bool ans = false;
    ll i=0,j=0,l=s.size();
    string p = "heidi";
    for(; i<l; i++){
        if(s[i]==p[j]){
            j++;
            if(j==p.size()) ans = true;
        }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

