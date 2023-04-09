#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s;
    cin >> s;
    ll l=s.size(),ib1=-1,ib2=-1;
    for(ll i=0; i<l; i++){
        if(s[i]=='B' && ib1 == -1) ib1=i+1;
        else if(s[i]=='B') ib2 = i+1;
    }
    bool ans =true;
    if(ib1%2 == ib2%2) ans = false;
    if(ans==false){
        cout << "No\n";
        return 0;
    }
    ans = false;
    ll i;
    for( i=0; i<l && s[i]!='R'; i++) ;
    for(i = i+1; i<l && s[i]!='R'; i++){
        if(s[i]=='K') ans = true;
    }
    if(ans) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
