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
        string s;
        cin >> s;
        ll od1=0,i;
        for(i=0; i<l; ){
            if(s[i]=='0' && i+1<l && s[i+1]=='1'){
                i = i+2;
                od1++;
            }
            else if(s[i]=='1' && i+1<l && s[i+1]=='0'){
                i = i+2;
                od1++;
            }
            else i++;
        }
        if(l==1) cout << "Ramos\n";
        else if(od1%2==1) cout << "Zlatan\n";
        else cout << "Ramos\n";
    }
    return 0;
}
