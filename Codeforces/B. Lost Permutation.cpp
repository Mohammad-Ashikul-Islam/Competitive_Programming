#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,s,i;
        cin >> n >> s;
        ll sum=0,mx=-1;
        for(i=0; i<n; i++){
            ll x;
            cin >> x;
            sum=sum+x;
            mx = max(mx,x);
        }
        ll gs=sum+s;
        bool b=false;
        while( ((mx*(mx+1))/2 )<=gs ){
            if(((mx*(mx+1))/2) == gs) b=true;
            mx++;
        }
        if(b==true) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}

