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
    cin >>t;
    while(t--){
        ll a,b;
        cin >> a >>b;
        if(a==b) cout << 0 << endl;
        else if(a<b){
            ll d=b-a;
            if(d%2==1) cout <<"1\n";
            else cout << 2 << endl;
        }
        else{
            ll d=a-b;
            if(d%2==0) cout << 1 << endl;
            else cout << 2 << endl;
        }
    }
    return 0;
}
