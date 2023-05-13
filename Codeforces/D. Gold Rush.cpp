#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve(ll a, ll b, bool& ans)
{
    if(a<=0) return;
    if(a==b){
        ans = true;
        return;
    }
    ll x1 = a/3;
    ll x2 = x1*2;
    if(x1+x2==a){
        solve(x1,b,ans);
        solve(x2,b,ans);
    }
}

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(b>a){
            cout << "NO\n";
            continue;
        }
        bool ans=false;
        solve(a,b,ans);
        if(ans==true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
