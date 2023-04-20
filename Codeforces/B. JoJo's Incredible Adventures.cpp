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
        ll l=s.size(),i=0;
        ll ans = INT_MIN,cnt=0;
        s = s+s;
        for(i=0; i<s.size(); i++){
            if(s[i]=='1') cnt++;
            else{
                ans = max(ans,cnt);
                cnt=0;
            }
        }
        ans = max(ans,cnt);
        if(ans==INT_MIN || ans == 0){
            cout << 0 << endl;
            continue;
        }
        else if(ans/2 == l){
            cout << (l*l) << endl;
            continue;
        }
        else{
            ll j;
            ll out=-1;
            for(i=1,j=ans; i<=j; i++,j--) out = max(out, i*j);
            cout << out << endl;
        }
    }
    return 0;
}
