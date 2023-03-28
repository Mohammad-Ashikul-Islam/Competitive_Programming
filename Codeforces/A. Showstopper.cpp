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
        ll i=0;
        for(i=0; i<n; i++) cin >> a[i];
        for(i=0; i<n; i++) cin >> b[i];
        for(i=0; i<n; i++){
            if(b[i]<a[i]){
                ll temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
        }
        ll mx1=a[0],mx2=b[0];
        for(i=0; i<n; i++) mx1 = max(mx1,a[i]);
        for(i=0; i<n; i++) mx2 = max(mx2,b[i]);
        if(mx1==a[n-1] && mx2==b[n-1]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

