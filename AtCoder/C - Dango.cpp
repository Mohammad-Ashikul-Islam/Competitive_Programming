#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll l;
    cin >> l;
    string s;
    cin >> s;
    if(s.size()==1){
        cout << -1 << endl;
        return 0;
    }
    ll i,lasti=-1,ans=-1;
    for(i=0; i<l; i++){
        if(s[i]=='-'){
            ll len = (lasti==-1?i:(i-lasti-1));
            if(lasti==i-1) len=-1;
            lasti=i;
            ans = max(ans,len);
        }
    }
    if(s[l-1] !='-' && lasti != -1){
        ll len = (l-1)-lasti;
        ans = max(ans,len);
    }
    cout << ans << endl;
    return 0;
}
