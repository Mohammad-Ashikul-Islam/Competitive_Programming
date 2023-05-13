#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll i,j,ans=0;
        unordered_map<ll,ll> m;
        for(i=0; i<n; i++){
            cin >> v[i];
            if(m.find(v[i]) != m.end()) m[v[i]]++;
            else m[v[i]]=1;
        }
        for(i=0,j=n-1; i<n; i++,j--){
            if(m.find(v[i])==m.end()){
                ans += j;
                continue;
            }
            ans += (j- (m[v[i]]-1) );
            m[v[i]]--;
        }
        cout << ans << endl;
    }
    return 0;
}
