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
        ll ans = INT_MIN;
        if(s[i]=='1' && s[l-1]=='1'){
            i=0;
            ll temp=0;
            while(i<l && s[i]=='1'){
                temp++;
                i++;
            }
            ll j=l-1;
            while(j>i && s[j]=='1'){
                temp++;
                j--;
            }
            ans = max(ans,temp);
        }
        for(i=0; i<l; ){
            if(s[i]=='1'){
                ll temp = 0;
                while(i<l && s[i]=='1'){
                    temp++;
                    i++;
                }
                ans = max(ans,temp);
            }
            else i++;
        }
        if(ans==INT_MIN){
            cout << 0 << endl;
            continue;
        }
        else if(ans>=l){
            cout << l*l << endl;
            continue;
        }
        for(ll j=1,k=ans; j<=k; j++,k--){
            ll temp = j*k;
            ans = max(temp,ans);
        }
        cout << ans << endl;
    }
    return 0;
}
