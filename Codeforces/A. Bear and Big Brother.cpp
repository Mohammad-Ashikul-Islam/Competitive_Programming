#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll a,b;
    cin >> a>>b;
    ll c=0;
    while(a<=b){
        a*=3;
        b*=2;
        c++;
    }
    cout << c << endl;
    return 0;
}
