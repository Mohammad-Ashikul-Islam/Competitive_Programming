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
        ll n,k,mx_e;
        cin >> n >>k;
        ll ara[n],i;
        for(i=0; i<n;i++){
            cin >> ara[i];
            if(i==0)mx_e=ara[i];
            else mx_e=max(mx_e,ara[i]);
        }
        map<ll,bool> m;
        ll e=1;
        for(; e<=mx_e; e=e*k){
            m.insert({e,false});
        }
        for(i=0; i<n; i++){
                if(ara[i]==0) continue;
                if(m.find(ara[i])!=m.end()){
                    if(m[ara[i]]==false){
                ara[i]=0;
                m[ara[i]]=true;
                        }
                        else continue;
            }
        }
        for(i=n-1; i>=0; i--){
            if(ara[i]==0) continue;
            for(auto it=m.rend(); it!=m.rbegin(); it++){
                    if(ara[i]==0) break;
                if(it->first>ara[i] || it->second==true) continue;
                ara[i]=ara[i]-it->first;
                it->second=true;
            }
        }
        cout << "Map: ";
        for(auto it=m.begin(); it!=m.end(); it++) cout << it->first << " "<< it->second << "\n:\n";
        cout << endl;
        bool flag=true;
        cout << "Debug: ";
        for(i=0; i<n;i++){
                cout << ara[i] << " ";
            if(ara[i]!=0) flag=false;
        }
        cout << endl;
        if(flag==true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
