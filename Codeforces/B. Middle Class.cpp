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
        ll n,x;
        cin >> n >> x;
        ll i,ara[n];
        for(i=0; i<n; i++) cin >> ara[i];
        ll c=0,reminder=0;
        sort(ara,ara+n,greater<long long>());
        for(i=0; i<n; i++){
            if(ara[i]>=x){
                c++;
                reminder+=(ara[i]-x);
            }
            else{
                reminder= reminder-(x-ara[i]);
                if(reminder>=0) c++;
                else break;
            }
            //cout << c << endl;
        }
        cout << c << endl;
    }
    return 0;
}
