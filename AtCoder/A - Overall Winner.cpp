#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll t=0,a=0,i;
    for(i=0; i<n; i++) s[i]=='T'?t++:a++;
    if(t>a) cout << "T\n";
    else if(a>t) cout << "A\n";
    else if(s[n-1]=='A') cout << "T\n";
    else cout << "A\n";
    return 0;
}

