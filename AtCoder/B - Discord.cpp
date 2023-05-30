#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll m,n,i,j;
    cin >> n >> m;
    ll ara[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cin >> ara[i][j];
            ara[i][j]--;
        }
    }
    vector<vector<ll>> v(n);
    for(i=0; i<m; i++){
        for(j=0; j<n-1; j++){
            v[ara[i][j]].push_back(ara[i][j+1]);
            v[ara[i][j+1]].push_back(ara[i][j]);
        }
    }
    //
    for(i=0; i<v.size(); i++){
            if(v[i].empty()) continue;
            sort(v[i].begin(),v[i].end());
            ll sz = unique(v[i].begin(),v[i].end())-v[i].begin();
            v[i].resize(sz);
    }
    ll ans = 0;
    for(i=0; i<v.size(); i++){
        ll temp = n-v[i].size()-1;
        ans += temp;
    }
    cout << ans/2 << endl;
    return 0;
}
