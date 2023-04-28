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
        if(s[0]=='0'){
            //cout << "Ans is: ";
            cout << 0 << endl;
            continue;
        }
        ll ans=1;
        for(ll i=0; i<s.size(); i++){
            if(i==0 && s[i]=='?') ans*=9;
            else if(s[i]=='?') ans *=10;
        }
        //cout << "Ans Is: ";
        cout << ans << endl;
    }
    return 0;
}
