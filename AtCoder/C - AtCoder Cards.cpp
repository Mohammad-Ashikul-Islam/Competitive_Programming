#include<bits/stdc++.h>
using namespace std;

#define ll long long
string m="atcoder";
bool valid(char ch){
   // cout << ch << endl;
    for(ll k=0; k<m.size(); k++){
    if(m[k]==ch) return true;
    }
    return false;
}

int main()
{
    ll sn1=0,sn2=0;
    string s,p;
    cin >> s >> p;
    sort(s.rbegin(),s.rend());
    sort(p.rbegin(),p.rend());
    ll i,n=s.size(),j;
    for(i=n-1; s[i]=='@' && i>=0; i--) sn1++;
    for(i=n-1; p[i]=='@' && i>=0; i--) sn2++;
    //cout << "sn1:sn2" << sn1 << " " << sn2 << endl;
    ll ara1[26]={0},ara2[26]={0};
    for(i=0; i<n && s[i]!='@'; i++) ara1[s[i]-'a']++;
    for(i=0; i<n && p[i]!='@'; i++) ara2[p[i]-'a']++;
    bool ans = true;
    for(i=0; i<26; i++){
        if(ara1[i]==ara2[i]) continue;
        if(ara1[i]>ara2[i]){
            if(valid('a'+i))
                sn2 -= abs(ara1[i]-ara2[i]);
            else ans = false;
        }
        else{
            if(valid('a'+i))
            sn1 -= abs(ara2[i]-ara1[i]);
            else ans = false;
        }
    }
    if(sn1 < 0 || sn2 < 0) ans =false;
    //else if(sn1>0|| sn2>0) ans=false;
        if(ans) cout << "Yes\n";
        else cout << "No\n";
    return 0;
}

