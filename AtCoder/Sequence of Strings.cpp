#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<string> v;
    ll n,i;
    cin >> n;
    for(i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    for(i=n-1; i>=0; i--) cout << v[i] << endl;
    return 0;
}
