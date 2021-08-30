#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ll i,c=0;
    cin >> s;
    for(i=0; i<s.size(); i++){
            if(i==0){
                c+=min(abs(s[i]-'a'),26-abs(s[i]-'a'));
                continue;
            }
        char ch=s[i],prv=s[i-1];
        c+=min(abs(ch-prv),26-abs(ch-prv));
    }
    cout << c << endl;
    return 0;
}
