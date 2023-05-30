#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s;
    getline(cin,s);
    bool ans = false;
    if(count(s.begin(),s.end(),'H')) ans = true;
    if(count(s.begin(),s.end(),'Q')) ans = true;
    if(count(s.begin(),s.end(),'9')) ans = true;
    //if(count(s.begin(),s.end(),'+')) ans = true;
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
