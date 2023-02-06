#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,seeds;
    vector<pair<int,int>> v;
    cin >> n >> seeds;
    while(n--){
        ll a,b;
        cin >> a >> b;
        v.push_back(make_pair(b,a));
    }
    sort(v.rbegin(), v.rend());
    ll ans=0,i;
    for(i=0; i<v.size(); i++){
        if(seeds-v[i].second >=0){
            seeds -= v[i].second;
            ans = ans+(v[i].first * v[i].second);
        }
        else{

            ans = ans+(v[i].first*seeds);
            seeds = 0;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
