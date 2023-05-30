#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll fnc(string s)
{
    ll cnt=0,i;
    for(i=0; i<s.size(); i++){
        char x = s[i];
        if (x == 'a' || x == 'e' ||
        x == 'i' || x == 'o' ||
        x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' ||
        x == 'O' || x == 'U') cnt++;
    }
    return cnt;
}

int main()
{
    string p,q,r;
    getline(cin,p);
    //geline(cin,);
    getline(cin>>ws,q);
    //getline();
    getline(cin>>ws,r);
    ll a=fnc(p),b=fnc(q),c=fnc(r);
    if(a==5 && b==7 && c==5) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

