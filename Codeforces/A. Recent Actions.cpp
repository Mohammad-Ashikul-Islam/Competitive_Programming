#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{   ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll ara[n+m+3] ={0};
        ll j=n;
        for(ll i=1; i<=m; i++){
            ll x;
            cin >> x;
            if(j==0) continue;
            ara[x]++;
            if(ara[x]==1){
            ara[j]=i;
            j--;
            }
        }
        for(ll i=1; i<=n; i++){
            if(i!=1) cout << " ";
            if(ara[i]==0) cout << "-1";
            else cout << ara[i];
        }
        cout << endl;
    }

    return 0;
}

