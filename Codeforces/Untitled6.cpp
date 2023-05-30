#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,i,c=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=1; i<n; i++) s[i]==s[i-1]?c++: c;
    cout << c << endl;
    return 0;
}
