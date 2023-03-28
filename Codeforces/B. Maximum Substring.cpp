#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l;
        cin >> l;
        ll one=0,zero=0;
        string s;
        cin >> s;
        for(ll i=0; i<l; i++ ) s[i]=='0'?zero++:one++;
        ll temp =1,mx=0;
        for(ll i=1; i<l; i++){
            if(s[i]==s[i-1]) temp++;
            else{
                mx = max(mx,temp);
                temp=1;
            }
        }
        mx = max(mx,temp);
        cout << max(zero*one, mx*mx) << endl;
    }
    return 0;
}

