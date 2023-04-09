#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s="Timur";
    sort(s.begin(),s.end());
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string p;
        cin >> p;
        sort(p.begin(),p.end());
        if(s==p) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

