#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll v,e;
        cin >> v >> e;
        ll ara[v+1]={0};
        for(ll i=0; i<e; i++){
            ll x,y;
            cin >>x >>y;
            ara[x]++;
            ara[y]++;
        }
        ll i;
        set<ll> st;
        for(i=0; i<v+1; i++){
            if(ara[i] == 0) continue;
            st.insert(ara[i]);
        }
        vector<ll> boom;
        for(auto it=st.begin(); it!=st.end(); it++) boom.push_back(*it);
        ll ans1,ans2;
        if(count(ara,ara+v+1,boom[1]) < count(ara,ara+v+1,boom[2])) ans1=boom[1], ans2=boom[2];
        else ans1=boom[2],ans2=boom[1];
        //cout << "Ans: ";
        cout << ans1 << " " << ans2-1 << endl;
    }
    return 0;
}
