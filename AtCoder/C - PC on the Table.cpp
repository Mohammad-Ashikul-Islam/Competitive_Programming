#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll r,c;
    cin >> r >> c;
    ll i;
    vector<string> v;
    for(i=0; i<r; i++){
        string s;
        cin >> s;
        ll j;
        for(j=1; j<c; j++){
            if(s[j]=='T' && s[j-1]=='T'){
                s[j-1]='P';
                s[j]='C';
            }
        }
        v.push_back(s);
    }
    for(i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}
