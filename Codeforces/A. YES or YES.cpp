#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i;
        for(i=0; i<3; i++) s[i]=toupper(s[i]);
        if(s=="YES") cout << s << endl;
        else cout << "NO\n";
    }
    return 0;
}

