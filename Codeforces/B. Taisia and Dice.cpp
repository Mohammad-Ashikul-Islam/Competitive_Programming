#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,s,r,i;
        cin >> n >> s >> r;
        vector<ll> v;
        v.push_back(s-r);
        n--;
        s = r;
        if(s%n==0){
            for(i=1; i<=n; i++){

                v.push_back(s/n);
            }
        }
        else{
            ll temp = s%n,j=1,x = s/n;
            for(i=1; i<=n; i++,j++){
                if(j<=temp) v.push_back(x+1);
                else v.push_back(x);
            }
        }
        for(i=0; i<v.size(); i++){
            if(i!=0) cout << " ";
            cout << v[i];
        }
        cout << endl;
    }

    return 0;
}

