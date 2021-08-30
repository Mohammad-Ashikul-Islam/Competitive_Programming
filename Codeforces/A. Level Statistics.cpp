#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll np[n],nc[n],i;
        for(i=0; i<n; i++) cin>> np[i] >> nc[i];
        if(n==1){
            if(nc[0]>np[0]) cout << "NO\n";
            else cout << "YES\n";
            continue;
        }
        bool flag=true;
        for(i=0; i<n; i++){
        if(i==0){
            if(nc[0]>np[0]) flag=false;
            continue;
        }
        if(nc[i]>nc[i-1]){
                if(np[i]<=np[i-1]) flag=false;
            }
        if(np[i]==np[i-1]){
                if(nc[i]!=nc[i-1]) flag=false;
            }

        if(i != 0){
            if(np[i]<np[i-1] || nc[i]<nc[i-1]) flag=false;
            }
        }
        if(flag==false) cout << "NO\n";
        else cout <<"YES\n";
    }
    return 0;
}

