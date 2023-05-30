#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    vector<string> v(8);
    string s1="WBWBWBWB",s2="BWBWBWBW",s;
    ll i;
    for(i=0; i<8; i++) cin >> v[i];
    bool ans = true;
    for(i=0; i<8; i++){
        for(ll j=1; j<8; j++){
            if(v[i][j]==v[i][j-1]) ans=false;
        }
    }
    if(ans) cout << "YES\n";
    else cout<< "NO\n";
    return 0;
}

