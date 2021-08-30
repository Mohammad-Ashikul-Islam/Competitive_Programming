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
        ll ara[n],i,j;
        vector<ll> ans;
        for(i=0; i<n; i++) cin >> ara[i];
        sort(ara,ara+n, greater<long long>());
        for(i=0,j=n-1; i<=j; i++,j--){
        if(i>j) break;
        if(i==j){ ans.push_back(ara[i]); break;}
            ans.push_back(ara[j]);
            ans.push_back(ara[i]);
        }
        cout << ans[ans.size()-1];
        for(i=ans.size()-2; i>=0; i--) cout << " " << ans[i];
        cout << endl;
    }
    return 0;
}
