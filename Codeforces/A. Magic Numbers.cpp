#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag=true;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1' && (i+1<s.size() && s[i+1]=='4') && (i+2<s.size() && s[i+2]=='4'))
                                        {i+=2; continue;}
        else if(s[i]=='1' && (i+1<s.size() && s[i+1]=='4')){i+=1; continue;}
        else if(s[i]=='1') continue;
        else {flag=false; break;}
    }
    if(flag==true) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
