#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s1="SELISE", s2= "SELISE Digital Platforms";
    ll t,c=1;
    cin >> t;
    cin.ignore();
    while(c<=t){
        string s;
        getline(cin,s);
        bool b1=true, b2=true;
        map<char,int> m;
        ll i;
        for(i=0; i<s.size(); i++){
            if(m[s[i]]) m[s[i]]++;
            else m[s[i]]=1;
        }
        auto p=m;
        for(i=0; i<s1.size(); i++){
            if(m[s1[i]]<=0){
                b1 = false;
                break;
            }
            m[s1[i]]--;
        }
        for(i=0; i<s2.size(); i++){
            if( p[s2[i]]<=0){
                b2 = false;
                break;
            }
            p[s2[i]]--;
        }
        if(b1 && b2) cout << "Case " << c << ": " << "BOTH\n";
        else if(b1) cout << "Case " << c << ": " << "SELISE\n";
        else if(b2) cout << "Case " << c << ": " << "SELISE Digital Platforms\n";
        else cout << "Case " << c << ": " << "NONE\n";
        c++;
    }
    return 0;
}
