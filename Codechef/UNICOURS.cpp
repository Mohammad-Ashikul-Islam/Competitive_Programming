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
        ll n,temp;
        cin >> n;
        ll ara[n];
        for(ll i=0; i<n; i++){
                cin >> ara[i];
            if(i==0) temp=ara[i];
            temp=max(temp,ara[i]);
        }
        cout << n-temp << endl;
    }
    return 0;
}

