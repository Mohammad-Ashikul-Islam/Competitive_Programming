#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i;
    cin>>t;
    unordered_map<char,ll> m;
    m.insert({'C',1});
    m.insert({'E',2});
    m.insert({'S',3});
    while(t--){
        string s;
        cin >> s;
        bool flag=true;
        ll prv=s[0];
        for(i=0; i<s.size(); i++){
            char crrnt=s[i];
            if(m[prv]>m[crrnt]){flag=false; break;}
            prv=crrnt;
        }
        if(flag==true) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
