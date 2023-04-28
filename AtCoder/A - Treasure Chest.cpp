#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "in\n";
#define no cout << "out\n";

int main()
{
    ll t;
    cin >> t;
    string s;
    cin >> s;
    string p;
    ll i;
    for(i=0; i<s.size(); i++){
        if(s[i] != '.') p.push_back(s[i]);
    }
    if(p=="|*|") yes
    else no
    return 0;
}
