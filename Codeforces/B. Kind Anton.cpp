#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >>t;
    while(t--){
        ll n;
        cin >> n;
        ll i,a[n+1],b[n+1];
        for(i=0; i<n; i++) cin >> a[i];
        for(i=0; i<n; i++) cin >> b[i];
        ll m1=0,p1=0;
        if(a[0] != b[0]){
            cout << "NO\n";
            continue;
        }
        if(a[0]==-1) m1=1;
        if(a[0]==1) p1=1;
        bool flag=true;
        for(i=1; i<n; i++){
            if(b[i]==a[i]){
                if(a[i]==-1) m1=1;
                else if(a[i]==1) p1=1;
                continue;
            }
            else{
                if(a[i]<b[i]){

                    if(p1>0){
                    if(a[i]==-1) m1=1;
                else if(a[i]==1) p1=1;
                    continue;
                    }
                    else{
                    flag=false;
                    if(a[i]==-1) m1=1;
                else if(a[i]==1) p1=1;
                    break;
                    }
                }
                else{
                    if(m1>0){ if(a[i]==-1) m1=1;
                else if(a[i]==1) p1=1;
                continue;
                }
                    else{
                    flag=false;
                    if(a[i]==-1) m1=1;
                else if(a[i]==1) p1=1;
                    break;
                    }
                }
            }
        }
        if(flag==false) cout << "NO\n";
        else cout << "YES\n";

    }
    return 0;
}
