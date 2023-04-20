#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll l;
    cin >> l;
    string s;
    cin >> s;
    ll sum1=0,sum2=0,i;
    bool flag=true;
    for(i=0; i<l/2; i++) sum1+= (s[i]-'0');
    for(; i<l; i++) sum2+= (s[i]-'0');
    for(i=0; i<l; i++){
        if(s[i]=='4' || s[i]=='7') continue;
        flag=false;
    }
    if(flag && sum1==sum2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

