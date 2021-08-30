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
    cin >>t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll ara[n],s[m];
        for(ll i=0; i<n; i++) cin >> ara[i];
        for(ll i=0; i<m; i++){ ll r; cin>>r; s[i]=r-1;}
        for(ll j=0; j<n;j++){
        for(ll i=0; i<m; i++){
                ll x=s[i];
                if(x+1>=n) continue;
                if(ara[x]>ara[x+1]) {
                    ll temp=ara[x]; ara[x]=ara[x+1]; ara[x+1]=temp;
            }
        }
        }
        bool flag=true;
        for(ll i=0; i<=n-2; i++){
               // cout << ara[i] << " ";
            if(ara[i]>ara[i+1]) { flag=false; break;}
        }
        if(flag==true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
