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
        string s,p;
        cin >> s;
        for(ll i=0; i<l; i++){
            char ch = s[i];
            ll c=0;
            ll j=i;
            while(j<l && ch==s[j]){
                c++;
                j++;
                if(c==3) c=1;
            }
            if(i!=j){
                if(j==l) i = l-1;
                else i=j-1;
            }
           if(c==0) c=1;
           for(ll j=0; j<c; j++) p.push_back(ch);
        }
        cout << p << endl;
    }

    return 0;
}
