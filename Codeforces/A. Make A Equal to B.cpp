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
        vector<ll> a(n),b(n);
        ll i,sum=0;
        for(i=0; i<n; i++) cin >> a[i];
        for(i=0; i<n; i++) cin >> b[i];
        bool d=false;
        ll one1=0,one2=0,c=0;
        for(i=0; i<n; i++){
            if(a[i] != b[i]) d=true;
            if(a[i] != b[i]) c++;
            if(a[i]==1) one1++;
            if(b[i]==1) one2++;
        }
        if(d==false && one1==one2){
            cout << 0 << endl;
        }
        else if(d==true && one1==one2){
            cout << 1 << endl;
        }
        else{
            ll temp = abs(one1-one2)+1;
            cout << min(c,temp) << endl;
        }
    }
    return 0;
}

