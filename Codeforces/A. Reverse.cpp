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
        for(ll i=0; i<n; i++) cin >> v[i];
        ll i,j,ind1=-1,ind2=-1;
        for(i=0; i<n; i++){
            if(v[i]==i+1) continue;
            for(j=n-1; j>i; j--){
                if(v[j]==i+1){
                    ind1=i;
                    ind2=j;
                    break;
                }
            }
            if(ind1!=-1 && ind2!=-1) break;
        }
        if(ind1!=-1 && ind2!=-1){
            reverse(v.begin()+i,v.begin()+j+1);
        }
        for(ll k=0; k<n; k++){
            if(k!=0) cout << " ";
            cout << v[k];
        }
        cout << endl;
    }
    return 0;
}

