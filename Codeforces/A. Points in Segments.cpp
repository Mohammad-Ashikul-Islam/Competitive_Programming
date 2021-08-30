#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll t,n,i,j,c=0;
    cin >> t >> n;
    vector<pair<ll,ll>> v;
    loop(i,0,t){
        ll x,y;
        cin >> x >> y;
        v.push_back(make_pair(min(x,y),max(x,y)));
    }
    vector<ll> d;
    loop(i,1,n+1){
        bool k=true;
        loop(j,0,v.size()){
            if(i==v[j].first || i==v[j].second) k=false;
            else if(i>v[j].first && i<v[j].second) k=false;
        }
        if(k==true) d.push_back(i);
    }
    if(d.size()==0) cout << "0\n\n";
    else{
        cout << d.size() << endl <<d[0];
        loop(i,1,d.size()) cout << " " << d[i];
        cout << endl;
    }
    return 0;
}
