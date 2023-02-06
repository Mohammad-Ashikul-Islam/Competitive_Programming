#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, h,i;
    cin >> n >> h;
    vector<bool> v;
    v.push_back(false);
    for(i=1; i<=n; i++) v.push_back(false);

    for(i=1; i<=h; i++){
        ll temp;
        cin >> temp;
        v[temp] = true;
    }
    for(i=1; i<=n; i++){
        if(v[i]==false) cout << i << endl;
    }
    return 0;
}
