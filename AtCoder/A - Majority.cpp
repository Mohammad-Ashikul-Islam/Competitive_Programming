#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    ll ans=0;
    while(t--){
        string s;
        cin >> s;
        if(s=="For") ans++;
        else ans--;
    }
    if(ans>0) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}

