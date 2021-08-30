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
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>=a){cout <<b << endl; continue;}
        if(d>=c){cout << "-1\n"; continue;}
        ll sum=0;
        sum+=b;
        a-=b;
        double net=c-d;
        net*=1.0;
        sum+= (ceil(a/net) * c);
        cout << sum << endl;
    }
    return 0;
}
