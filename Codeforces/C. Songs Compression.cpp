#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
int main()
{
    ll n,capacity,sum=0,c=0,i;
    cin >> n >> capacity;
    vector<ll> v;
    loop(i,0,n){
        ll x,y,z;
        cin >> x >> y;
        sum+=x;
        v.push_back(x-y);
    }
    if(sum<=capacity) {cout << 0 << endl; return 0;}
    sort(v.begin(),v.end(),greater<ll>());
    loop(i,0,v.size()){
        sum-=v[i];
        //cout <<"debug: " <<v[i] << endl;
        c++;
        if(sum<=capacity) break;
    }
    if(sum>capacity) cout << "-1\n";
    else
    cout << c << endl;
    return 0;
}
