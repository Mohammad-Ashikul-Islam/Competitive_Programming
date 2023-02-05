#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<string> v;
    ll t,k;
    cin >> t >> k;
    while(t--){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.begin()+k);
    for(ll i=0; i<k; i++){
        cout << v[i] << endl;
    }
    return 0;
}
