#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,m,i;
    string s;
    cin >> n >> m;
    cin >> s;
    string p;
    ll c=0;
    for(i=0; i<s.size(); i++){
        if(s[i]=='x') p.push_back(s[i]);
        else{
            if(c<m){
                p.push_back(s[i]);
                c++;
            }
            else p.push_back('x');
        }
    }
    cout << p << endl;
    return 0;
}
