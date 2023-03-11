#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    string s="31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    ll t;
    cin >> t;
    while(t--){
        string p;
        cin >> p;
        ll c=0,i;
        for(i=0; i<p.size(); i++){
            if(p[i]==s[i]) c++;
            else break;
        }
        cout << c << endl;
    }
    return 0;
}

