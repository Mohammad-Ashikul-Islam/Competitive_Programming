#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,minimun=0,ans=INT_MAX;
    string s;
    cin>> n;
    cin >> s;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='-') minimun--;
        else minimun++;
        if(minimun<0) minimun=0;
    }
    //if(after_operation<0) after_operation=0;
    cout << minimun << endl;
    return 0;
}
