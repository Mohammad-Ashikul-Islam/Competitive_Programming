#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin >> s;
    long long l=s.size()-1;
    for(int i=0,j=0; i<=l;i++){
        if(s[i]=='-' && i+1<=l && s[i+1]=='-'){ p.push_back('2'); i++;}
        else if(s[i]=='-' && i+1<=l && s[i+1]=='.'){ p.push_back('1'); i++;}
        else p.push_back('0');
    }
    cout << p << endl;
    return 0;
}
