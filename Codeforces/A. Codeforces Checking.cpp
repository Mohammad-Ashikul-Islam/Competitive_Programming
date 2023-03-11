#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    string s="codeforces";
    while(t--){
        char ch;
        cin>>ch;
        if(count(s.begin(),s.end(),ch)) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}

