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
        ll m1,m2,i;
        for(i=0; i<n; i++){
            cin >> v[i];
            if(i==0) continue;
            else if(i==1){
                m1=max(v[0],v[1]);
                m2=min(v[0],v[1]);
                continue;
            }
            if(v[i]>m1){
                m2=m1;
                m1=v[i];
            }
            else if(v[i]>m2) m2=v[i];
        }
        //cout << m1 << "\t" << m2 << endl;
        for(i=0; i<n; i++){
            ll p = v[i]-m1;
            if(v[i]==m1) p = m1-m2;
            if(i==0) cout << p;
            else cout << " "<<p;
        }
        cout << endl;
    }
    return 0;
}

