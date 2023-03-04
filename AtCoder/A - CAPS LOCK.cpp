#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s;
    cin >> s;
    for(ll i=0; i<s.size(); i++) s[i] = toupper(s[i]);
    cout << s << endl;
    return 0;
}
