#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll n,x,i;
    cin >> n >> x;
    vector<ll> a(n+1),b(n+1);
    for(i=1; i<=n; i++) cin >> a[i];
    for(i=1; i<=n; i++) cin >> b[i];
    ll ans=-1;
    for(i=1; i<=n; i++){
        if(a[i]==x){
            if(ans==-1) ans = i;
            else if(b[i] > b[ans]) ans=i;
        }
    }
    if(ans != -1){
        cout << ans << endl;
        return 0;
    }
    x = a[1];
    for(i=1; i<=n; i++){
        if(a[i]==x){
            if(ans==-1) ans = i;
            else if(b[i] > b[ans]) ans=i;
        }
    }
    cout << ans << endl;
    return 0;
}
