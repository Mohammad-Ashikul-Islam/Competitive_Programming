#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long stof=0,ftos=0,i;
    cin >> i;
    cin >> s;
    for(i=1; i<s.size(); i++){
        if(s[i-1]=='F' && s[i]=='S') ftos++;
        else if(s[i-1]=='S' && s[i]=='F') stof++;
    }
    if(stof>ftos) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
