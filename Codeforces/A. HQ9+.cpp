#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool temp=0;
    for(long long i=0; i<s.size(); i++){
        char c =  s[i];
        if(c=='H' || c=='Q' || c=='9'){ temp=true; break;}
    }
    if(temp==true) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}


