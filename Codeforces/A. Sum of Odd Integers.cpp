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
        ll x,k;
        cin >>x >> k;
        if(k>x) cout << "NO\n";
        else if(x/2>=k) cout << "NO\n";
        else if(x%2==0){
            if(k%2==1) cout << "NO\n";
            else cout << "YES\n";
        }
        else{
            if(k%2==0) cout << "NO\n";
            else cout << "YES\n";
        }

    }

    return 0;
}
