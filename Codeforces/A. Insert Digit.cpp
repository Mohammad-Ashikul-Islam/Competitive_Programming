#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll l,num;
        cin >> l >> num;
        string s;
        cin >> s;
        ll i;
        bool b=false;
        for(i=0; i<l; i++){
              if(s[i]-'0' >= num) cout << s[i];
              else if(s[i]-'0'<num && b==false){
                cout << num << s[i];
                b=true;
              }
              else cout << s[i];
            }
            if(b==false) cout << num;
            cout << endl;
    }
    return 0;
}

