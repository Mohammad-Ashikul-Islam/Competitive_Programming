#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(index,start,limit) for(index=start; index<limit; index++)
#define sl(n) scanf("%lld",&n)
#define si(n) scanf("%d",&n)
#define pf printf

int main()
{
    ll n,b,d;
    cin >> n >> b >> d;
    ll c=0,i,current_size=0;
    for(i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x>b) continue;
        if(x+current_size>d){c++; current_size=0;}
        else current_size+=x;
    }
    cout << c << endl;
    return 0;
}

