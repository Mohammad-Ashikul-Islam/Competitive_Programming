#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin >> s >> p ;
    for(int i=0;i<s.size(); i++){
        int sum = (s[i]-'0')+(p[i]-'0');
        if(sum==2) cout << '0';
        else cout << sum;
    }
    cout << endl;
    return 0;
}


