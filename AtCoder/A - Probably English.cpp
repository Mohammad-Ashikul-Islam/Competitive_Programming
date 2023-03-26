#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes "Yes"
#define no "No"
#define endl "\n"

int main()
{
    ll n;
    cin >> n;
    bool b=false;
    for(ll i=0; i<n; i++){
        string s;
        cin >> s;
        if(s=="and" || s=="not" || s=="that" || s=="the" || s== "you") b=true;
    }
    if(b) cout << yes << endl;
    else cout << no << endl;
    return 0;
}
