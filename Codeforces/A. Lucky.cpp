#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll temp1=0,temp2=0;
        temp1= (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        temp2= (s[3]-'0')+(s[4]-'0')+(s[5]-'0');
        temp1==temp2?cout<<"YES\n":cout<< "NO\n";
    }
    return 0;
}

